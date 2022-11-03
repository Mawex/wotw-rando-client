#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayAnimationCutsceneState {
        namespace {
            inline app::PlayAnimationCutsceneState__Class* type_info_ref = nullptr;
        }
        inline app::PlayAnimationCutsceneState__Class** type_info = &type_info_ref;
        inline app::PlayAnimationCutsceneState__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimationCutsceneState__Class>(type_info, "", "PlayAnimationCutsceneState");
        }
        inline app::PlayAnimationCutsceneState* create() {
            return il2cpp::create_object<app::PlayAnimationCutsceneState>(get_class());
        }
    } // namespace PlayAnimationCutsceneState
} // namespace app::classes::types
