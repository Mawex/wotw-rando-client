#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterAnimationSystem {
        namespace {
            inline app::CharacterAnimationSystem__Class* type_info_ref = nullptr;
        }
        inline app::CharacterAnimationSystem__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationSystem__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationSystem__Class>(type_info, "", "CharacterAnimationSystem");
        }
        inline app::CharacterAnimationSystem* create() {
            return il2cpp::create_object<app::CharacterAnimationSystem>(get_class());
        }
    } // namespace CharacterAnimationSystem
} // namespace app::classes::types
