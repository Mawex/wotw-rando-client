#include <Randomizer/conditions/condition_override.h>
#include <Randomizer/conditions/condition_uber_state.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/QuestNodeWisps.h>

#include <optional>

using namespace modloader;
using namespace app::classes;

namespace {
    uber_states::UberState has_sword(static_cast<UberStateGroup>(48248), 49214);
    void initialize() {
        randomizer::conditions::register_condition_intercept("swampTorchIntroductionA/npcSetup", [](std::string_view path, void* obj) { return std::optional<bool>(true); });
        randomizer::conditions::register_condition_uber_state_intercept(has_sword, [](app::ConditionUberState* state) { return std::optional<bool>(true); });
    }

    IL2CPP_INTERCEPT(QuestNodeWisps, void, SelectInteraction, (app::QuestNodeWisps * this_ptr)) {
        auto path = il2cpp::unity::get_path(this_ptr);
        if (path == "swampTorchIntroductionA/npcSetup/mapMakerSetup/mapMakerEntity(Clone)/dialogs/questGraph") {
            auto setup = this_ptr->fields.QuestSetup;
            if (setup->fields.QuestInteractionSets->fields._size > 2)
                il2cpp::invoke(setup->fields.QuestInteractionSets, "Remove", setup->fields.QuestInteractionSets->fields._items->vector[2]);
        }

        next::QuestNodeWisps::SelectInteraction(this_ptr);
    }

    CALL_ON_INIT(initialize);
} // namespace
