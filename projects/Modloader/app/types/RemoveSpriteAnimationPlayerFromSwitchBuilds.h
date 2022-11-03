#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveSpriteAnimationPlayerFromSwitchBuilds {
        namespace {
            inline app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class* type_info_ref = nullptr;
        }
        inline app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class** type_info = &type_info_ref;
        inline app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class* get_class() {
            return il2cpp::get_class<app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class>(type_info, "Moon.Timeline", "RemoveSpriteAnimationPlayerFromSwitchBuilds");
        }
        inline app::RemoveSpriteAnimationPlayerFromSwitchBuilds* create() {
            return il2cpp::create_object<app::RemoveSpriteAnimationPlayerFromSwitchBuilds>(get_class());
        }
    } // namespace RemoveSpriteAnimationPlayerFromSwitchBuilds
} // namespace app::classes::types
