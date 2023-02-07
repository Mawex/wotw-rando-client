#include <Modloader/app/methods/InteractiveMessageBox.h>
#include <Modloader/app/methods/MessageControllerB.h>
#include <Modloader/app/methods/Moon/Timeline/ShowFixedTimeTextEntity.h>
#include <Modloader/app/structs/InteractiveMessageBox.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/Game/UI_Hints.h>


namespace {
    using namespace app::classes;

    IL2CPP_INTERCEPT(Game::UI_Hints, app::MessageBox*, Show, (app::MessageProvider * message_provider, app::HintLayer__Enum layer, float duration, app::Vector3 hint_offset)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(Moon::Timeline::ShowFixedTimeTextEntity, void, OnUpdateEntity, (app::ShowFixedTimeTextEntity* this_ptr, float delta_time)) {
        next::Moon::Timeline::ShowFixedTimeTextEntity::OnUpdateEntity(this_ptr, delta_time);
        il2cpp::unity::set_position(this_ptr->fields.m_box, app::Vector3{0.f, -9999.f, 0.f});
    }

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowNPCStoryMessage, (app::MessageControllerB * this_ptr, app::MessageProvider* message_provider, app::String* replace, app::String* with, app::MessageControllerB_NpcMessageStyle__Enum message_style, float duration, bool is_interactive, int32_t start_id, int32_t end_id, bool lock_input, app::ShowFixedTimeTextEntity_TextVisuals* visuals)) {
        auto message_box = next::MessageControllerB::ShowNPCStoryMessage(
                this_ptr,
                message_provider,
                replace,
                with,
                message_style,
                duration,
                is_interactive,
                start_id,
                end_id,
                lock_input,
                visuals
        );

        auto appear_sound = il2cpp::unity::find_child(message_box, std::vector<std::string_view>{"sounds", "appearSound"});

        if (appear_sound != nullptr) {
            il2cpp::unity::destroy_object(
                    appear_sound
            );
        }


        return message_box;
    }
}