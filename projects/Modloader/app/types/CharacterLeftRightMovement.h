#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterLeftRightMovement {
        namespace {
            inline app::CharacterLeftRightMovement__Class* type_info_ref = nullptr;
        }
        inline app::CharacterLeftRightMovement__Class** type_info = &type_info_ref;
        inline app::CharacterLeftRightMovement__Class* get_class() {
            return il2cpp::get_class<app::CharacterLeftRightMovement__Class>(type_info, "", "CharacterLeftRightMovement");
        }
        inline app::CharacterLeftRightMovement* create() {
            return il2cpp::create_object<app::CharacterLeftRightMovement>(get_class());
        }
    } // namespace CharacterLeftRightMovement
} // namespace app::classes::types
