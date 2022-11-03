#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerFaceDirectionAction {
        namespace {
            inline app::PlayerFaceDirectionAction__Class* type_info_ref = nullptr;
        }
        inline app::PlayerFaceDirectionAction__Class** type_info = &type_info_ref;
        inline app::PlayerFaceDirectionAction__Class* get_class() {
            return il2cpp::get_class<app::PlayerFaceDirectionAction__Class>(type_info, "", "PlayerFaceDirectionAction");
        }
        inline app::PlayerFaceDirectionAction* create() {
            return il2cpp::create_object<app::PlayerFaceDirectionAction>(get_class());
        }
    } // namespace PlayerFaceDirectionAction
} // namespace app::classes::types
