#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseAnimatorAction {
        namespace {
            inline app::BaseAnimatorAction__Class* type_info_ref = nullptr;
        }
        inline app::BaseAnimatorAction__Class** type_info = &type_info_ref;
        inline app::BaseAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::BaseAnimatorAction__Class>(type_info, "", "BaseAnimatorAction");
        }
        inline app::BaseAnimatorAction* create() {
            return il2cpp::create_object<app::BaseAnimatorAction>(get_class());
        }
    } // namespace BaseAnimatorAction
} // namespace app::classes::types
