#include <input/rando_bindings.h>

#include <interop/csharp_bridge.h>
#include <macros.h>
#include <input/controller_bindings.h>
#include <input/helpers.h>
#include <input/simulator.h>
#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <fstream>
#include <unordered_map>
#include <unordered_set>

#include <magic_enum/include/magic_enum.hpp>
#include <thread>

using namespace modloader;

namespace randomizer
{
    namespace input
    {
        namespace
        {
            const std::string KEYBOARD_REBIND_FILE = "keyboard_bindings.json";

            struct KeyboardMouseInput
            {
                std::vector<app::KeyCode__Enum> codes;
                std::vector<int> mouse_buttons;

                bool respects_modifiers = false;
                bool shift = false;
                bool ctrl = false;
                bool alt = false;
                bool altgr = false;
            };

            struct ControlInfo
            {
                std::vector<rando_input_callback> on_pressed_actions;
                std::vector<rando_input_callback> on_release_actions;
                std::vector<KeyboardMouseInput> kbm_bindings;
                bool simulated_state = false;

                bool is_pressed = false;
                bool is_just_pressed = false;
            };

            std::unordered_map<Action, ControlInfo> bindings;

            void add_keyboard_binding(Action action, KeyboardMouseInput input)
            {
                if (action < Action::RANDO_ACTIONS_START)
                    return;

                if (input.codes.empty() && input.mouse_buttons.empty())
                    return;

                bindings[action].kbm_bindings.push_back(input);
            }

            void handle_binding(Action action, std::vector<int> const& buttons, bool respects_modifiers)
            {
                KeyboardMouseInput input;
                input.respects_modifiers = respects_modifiers;
                for (auto const& button : buttons)
                {
                    if (button < 0)
                        input.mouse_buttons.push_back(-button);
                    else
                    {
                        auto code = static_cast<app::KeyCode__Enum>(button);
                        input.codes.push_back(code);
                        input.shift |= code == app::KeyCode__Enum_LeftShift || code == app::KeyCode__Enum_RightShift;
                        input.ctrl |= code == app::KeyCode__Enum_LeftControl || code == app::KeyCode__Enum_RightControl;
                        input.alt |= code == app::KeyCode__Enum_LeftAlt || code == app::KeyCode__Enum_RightAlt;
                        input.altgr |= code == app::KeyCode__Enum_AltGr;
                    }
                }

                add_keyboard_binding(action, input);
            }

            IL2CPP_INTERCEPT(, PlayerInput, void, ClearControls, (app::PlayerInput* this_ptr)) {
                PlayerInput::ClearControls(this_ptr);
                clear_simulators();
                for (auto& binding : bindings)
                    binding.second.kbm_bindings.clear();
            }

            IL2CPP_INTERCEPT(, PlayerInput, void, AddKeyboardControls, (app::PlayerInput* this_ptr)) {
                PlayerInput::AddKeyboardControls(this_ptr);
                read_bindings(base_path + KEYBOARD_REBIND_FILE, handle_binding);
                register_simulators(this_ptr);
            }

            STATIC_IL2CPP_BINDING(UnityEngine, Input, bool, GetKeyInt, (app::KeyCode__Enum key));
            STATIC_IL2CPP_BINDING(UnityEngine, Input, bool, GetMouseButton, (int button));
            bool is_pressed(KeyboardMouseInput const& input)
            {
                if (input.respects_modifiers)
                {
                    auto shift = Input::GetKeyInt(app::KeyCode__Enum_LeftShift) || Input::GetKeyInt(app::KeyCode__Enum_RightShift);
                    auto ctrl = Input::GetKeyInt(app::KeyCode__Enum_LeftControl) || Input::GetKeyInt(app::KeyCode__Enum_RightControl);
                    auto alt = Input::GetKeyInt(app::KeyCode__Enum_LeftAlt) || Input::GetKeyInt(app::KeyCode__Enum_RightAlt);
                    //auto altgr = Input::GetKeyInt(app::KeyCode__Enum_AltGr);

                    if (input.shift != shift || input.ctrl != ctrl || input.alt != alt)
                        return false;
                }

                for (auto code : input.codes)
                    if (!Input::GetKeyInt(code))
                        return false;

                for (auto button : input.mouse_buttons)
                    if (!Input::GetMouseButton(button))
                        return false;

                return true;
            }

            IL2CPP_INTERCEPT(, SavePedestalController, void, BeginTeleportation, (app::SavePedestalController* this_ptr, app::Vector2* teleport_target_world_position)) {
                auto player_input = il2cpp::get_class<app::PlayerInput__Class>("", "PlayerInput")->static_fields->Instance;
                auto prev = player_input->fields.Active;
                SavePedestalController::BeginTeleportation(this_ptr, teleport_target_world_position);
                player_input->fields.Active = prev;
            }

            IL2CPP_INTERCEPT(, PlayerInput, void, RefreshControls, (app::PlayerInput* this_ptr)) {
                PlayerInput::RefreshControls(this_ptr);
                refresh_controller_controls();

                for (auto& binding : bindings)
                {
                    auto pressed = is_controller_pressed(binding.first);
                    if (!pressed)
                    {
                        for (auto const& input : binding.second.kbm_bindings)
                        {
                            if (is_pressed(input))
                            {
                                pressed = true;
                                break;
                            }
                        }
                    }

                    pressed |= binding.second.simulated_state;

                    auto is_just_released = !pressed && binding.second.is_pressed;
                    binding.second.is_just_pressed = pressed && !binding.second.is_pressed;
                    binding.second.is_pressed = pressed;
                    if (binding.second.is_just_pressed)
                        for (auto action : binding.second.on_pressed_actions)
                            action(binding.first, true);

                    if (is_just_released)
                        for (auto action : binding.second.on_release_actions)
                            action(binding.first, false);
                }
            }
        }

        bool is_pressed(Action action)
        {
            if (action < Action::RANDO_ACTIONS_START)
                return false;

            return bindings[action].is_pressed;
        }

        void add_on_pressed_callback(Action action, rando_input_callback callback)
        {
            if (action < Action::RANDO_ACTIONS_START)
                return;

            bindings[action].on_pressed_actions.push_back(callback);
        }

        void add_on_released_callback(Action action, rando_input_callback callback)
        {
            if (action < Action::RANDO_ACTIONS_START)
                return;

            bindings[action].on_release_actions.push_back(callback);
        }

        void simulate_action(Action action, bool value)
        {
            auto& binding = input::bindings[action];
            binding.simulated_state = value;
            if (binding.is_pressed != value)
            {
                binding.is_pressed = value;
                binding.is_just_pressed = value;
                auto& callbacks = value ? binding.on_pressed_actions : binding.on_release_actions;
                for (auto callback : callbacks)
                    callback(action, value);
            }
        }

        void csharp_callback(Action action, bool pressed)
        {
            csharp_bridge::on_action_triggered(action);
        }

        STATIC_IL2CPP_BINDING(, RaceSystem, app::RaceSystem*, get_Instance, ())
        STATIC_IL2CPP_BINDING(, GhostManager, app::GhostRecorder*, GetOrCreateRecorder, ())
        IL2CPP_BINDING(, RaceSystem, app::GhostRecorder*, get_Recorder, (app::RaceSystem* this_ptr))
        IL2CPP_BINDING(, RaceSystem, app::GhostService*, get_GhostService, (app::RaceSystem* this_ptr))
        IL2CPP_BINDING(, GhostRecorder, void, InitializeRecorder, (app::GhostRecorder* this_ptr, app::String* outputPath))
        IL2CPP_BINDING(, GhostRecorder, void, RegisterPlugin, (app::GhostRecorder* this_ptr, app::IRecorderPlugin* plugin))
        IL2CPP_BINDING(, GhostRecorder, void, StartRecorder, (app::GhostRecorder* this_ptr))
        IL2CPP_BINDING(, GhostRecorder, void, StopRecorder, (app::GhostRecorder* this_ptr))
        IL2CPP_BINDING(, GhostRecorder, void, WriteToFile, (app::GhostRecorder* this_ptr, app::String* path, bool allowAppend))
        IL2CPP_BINDING(, GhostPlayer, void, RegisterPlugin, (app::GhostPlayer* this_ptr, app::IRecorderPlugin* plugin))
        NAMED_IL2CPP_BINDING(, GhostCharacterPlugin, void, .ctor, ctor, (app::GhostCharacterPlugin* this_ptr))
        NAMED_IL2CPP_BINDING(, GhostStateMachinePlugin, void, .ctor, ctor, (app::GhostStateMachinePlugin* this_ptr))
        NAMED_IL2CPP_BINDING(, GhostCharacterAbilitiesPlugin, void, .ctor, ctor, (app::GhostCharacterAbilitiesPlugin* this_ptr))
        NAMED_IL2CPP_BINDING(, GhostGenericEventsPlugin, void, .ctor, ctor, (app::GhostGenericEventsPlugin* this_ptr))
        NAMED_IL2CPP_BINDING(, GhostCharacterStatesPlugin, void, .ctor, ctor, (app::GhostCharacterStatesPlugin* this_ptr))
        NAMED_IL2CPP_BINDING(, GhostTimelineEventsPlugin, void, .ctor, ctor, (app::GhostTimelineEventsPlugin* this_ptr))
        NAMED_IL2CPP_BINDING(, GhostWorldObjectsLifetimePlugin, void, .ctor, ctor, (app::GhostWorldObjectsLifetimePlugin* this_ptr))
        NAMED_IL2CPP_BINDING(, GhostRecorderData, void, .ctor, ctor, (app::GhostRecorderData* this_ptr))
        IL2CPP_BINDING(, GhostRecorderData, void, LoadFromFile, (app::GhostRecorderData* this_ptr, app::String* filePath))
        IL2CPP_BINDING(, GhostService, void, PopulateGhosts, (app::GhostService* this_ptr, app::GhostPlayer__Array*))
        IL2CPP_BINDING(, GhostService, void, RunGhosts, (app::GhostService* this_ptr))
        IL2CPP_BINDING(, GhostManager, app::GhostPlayer*, createGhost, (app::GhostManager* this_ptr, app::String* ghostInputFile))

        app::GhostRecorder* recorder = nullptr;
        constexpr std::string_view OUTPUT_PATH = "C:\\moon\\rando.ghost";

        void test1(Action action, bool pressed)
        {
            console::console_send("race1 debug:");

            // auto race_system = RaceSystem::get_Instance();
            recorder = GhostManager::GetOrCreateRecorder();

            auto* const character_plugin = il2cpp::create_object<app::GhostCharacterPlugin>("", "GhostCharacterPlugin");
            GhostCharacterPlugin::ctor(character_plugin);
            GhostRecorder::RegisterPlugin(recorder, reinterpret_cast<app::IRecorderPlugin*>(character_plugin));

            auto* const state_machine_plugin = il2cpp::create_object<app::GhostStateMachinePlugin>("", "GhostStateMachinePlugin");
            GhostStateMachinePlugin::ctor(state_machine_plugin);
            GhostRecorder::RegisterPlugin(recorder, reinterpret_cast<app::IRecorderPlugin*>(state_machine_plugin));

            auto* const character_abilities_plugin = il2cpp::create_object<app::GhostCharacterAbilitiesPlugin>("", "GhostCharacterAbilitiesPlugin");
            GhostCharacterAbilitiesPlugin::ctor(character_abilities_plugin);
            GhostRecorder::RegisterPlugin(recorder, reinterpret_cast<app::IRecorderPlugin*>(character_abilities_plugin));

            auto* const generic_events_plugin = il2cpp::create_object<app::GhostGenericEventsPlugin>("", "GhostGenericEventsPlugin");
            GhostGenericEventsPlugin::ctor(generic_events_plugin);
            GhostRecorder::RegisterPlugin(recorder, reinterpret_cast<app::IRecorderPlugin *>(generic_events_plugin));

            auto* const timeline_events_plugin = il2cpp::create_object<app::GhostTimelineEventsPlugin>("", "GhostTimelineEventsPlugin");
            GhostTimelineEventsPlugin::ctor(timeline_events_plugin);
            GhostRecorder::RegisterPlugin(recorder, reinterpret_cast<app::IRecorderPlugin *>(timeline_events_plugin));

            auto* const world_objects_lifetime_plugin = il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin>("", "GhostWorldObjectsLifetimePlugin");
            GhostWorldObjectsLifetimePlugin::ctor(world_objects_lifetime_plugin);
            GhostRecorder::RegisterPlugin(recorder, reinterpret_cast<app::IRecorderPlugin *>(world_objects_lifetime_plugin));

            GhostRecorder::InitializeRecorder(recorder, il2cpp::string_new(OUTPUT_PATH));
            GhostRecorder::StartRecorder(recorder);
        }

        void test2(Action action, bool pressed)
        {
            console::console_send("race2 debug:");
            GhostRecorder::StopRecorder(recorder);
            GhostRecorder::WriteToFile(recorder, il2cpp::string_new(OUTPUT_PATH), false);
        }

        app::GhostPlayer* ghost_player = nullptr;
        void test3(Action action, bool pressed)
        {
            console::console_send("race3 debug:");

            auto manager_class = il2cpp::get_class<app::GhostManager__Class>("", "GhostManager");
            auto manager = manager_class->static_fields->instance;

            auto* const recorder_data = il2cpp::create_object<app::GhostRecorderData>("", "GhostRecorderData");
            GhostRecorderData::ctor(recorder_data);
            GhostRecorderData::LoadFromFile(recorder_data, il2cpp::string_new(OUTPUT_PATH));

            ghost_player = GhostManager::createGhost(manager, il2cpp::string_new(OUTPUT_PATH));
            ghost_player->fields.GhostRecorderData = recorder_data;

            auto ghost_player_vector = std::vector<app::GhostPlayer*> { ghost_player };
            auto ghost_player_array = il2cpp::array_new<app::GhostPlayer__Array>(reinterpret_cast<Il2CppClass *>(ghost_player->klass), ghost_player_vector);

            auto ghost_service = RaceSystem::get_GhostService(RaceSystem::get_Instance());
            GhostService::PopulateGhosts(ghost_service, ghost_player_array);
            GhostService::RunGhosts(ghost_service);
        }

        void test4(Action action, bool pressed)
        {
            if (ghost_player->fields.m_isStarted)
                console::console_send("started");
        }

        IL2CPP_INTERCEPT(, GhostPlayer, void, Run, (app::GhostPlayer* this_ptr)) {
            auto* const timeline_events_plugin = il2cpp::create_object<app::GhostTimelineEventsPlugin>("", "GhostTimelineEventsPlugin");
            GhostTimelineEventsPlugin::ctor(timeline_events_plugin);
            GhostPlayer::RegisterPlugin(this_ptr, reinterpret_cast<app::IRecorderPlugin *>(timeline_events_plugin));

            auto* const world_objects_lifetime_plugin = il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin>("", "GhostWorldObjectsLifetimePlugin");
            GhostWorldObjectsLifetimePlugin::ctor(world_objects_lifetime_plugin);
            GhostPlayer::RegisterPlugin(this_ptr, reinterpret_cast<app::IRecorderPlugin *>(world_objects_lifetime_plugin));

            GhostPlayer::Run(this_ptr);
        }

        void initialize()
        {
            add_on_pressed_callback(Action::Binding1, test1);
            add_on_pressed_callback(Action::Binding2, test2);
            add_on_pressed_callback(Action::Binding3, test3);
            add_on_pressed_callback(Action::Binding4, test4);
            // add_on_pressed_callback(Action::Binding1, csharp_callback);
            // add_on_pressed_callback(Action::Binding2, csharp_callback);
            // add_on_pressed_callback(Action::Binding3, csharp_callback);
            // add_on_pressed_callback(Action::Binding4, csharp_callback);
            add_on_pressed_callback(Action::Binding5, csharp_callback);
            add_on_pressed_callback(Action::Reload, csharp_callback);
            add_on_pressed_callback(Action::ShowLastPickup, csharp_callback);
            add_on_pressed_callback(Action::ShowProgressWithHints, csharp_callback);
            add_on_pressed_callback(Action::WarpCredits, csharp_callback);
            add_on_pressed_callback(Action::ToggleCursorLock, csharp_callback);
            add_on_pressed_callback(Action::ToggleAlwaysShowKeystones, csharp_callback);
            add_on_pressed_callback(Action::ToggleAutoaim, csharp_callback);
            add_on_pressed_callback(Action::ShowDevFlag, csharp_callback);
            add_on_pressed_callback(Action::ToggleDebug, csharp_callback);
            add_on_pressed_callback(Action::PrintCoordinates, csharp_callback);
            add_on_pressed_callback(Action::TeleportCheat, csharp_callback);
            add_on_pressed_callback(Action::UnlockSpoilers, csharp_callback);
            add_on_pressed_callback(Action::TogglePickupNamesOnSpoiler, csharp_callback);
            add_on_pressed_callback(Action::ForceExit, csharp_callback);
        }

        CALL_ON_INIT(initialize);
    }
}

INJECT_C_DLLEXPORT bool action_pressed(Action action)
{
    if (action < Action::RANDO_ACTIONS_START)
        randomizer::input::simulate(action, true);
    else
        randomizer::input::simulate_action(action, true);

    return true;
}

INJECT_C_DLLEXPORT bool action_released(Action action)
{
    if (action < Action::RANDO_ACTIONS_START)
        randomizer::input::simulate(action, false);
    else
        randomizer::input::simulate_action(action, false);

    return true;
}
