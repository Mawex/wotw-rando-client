#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetMecanimTriggerAction {
        namespace {
            inline app::SetMecanimTriggerAction__Class* type_info_ref = nullptr;
        }
        inline app::SetMecanimTriggerAction__Class** type_info = &type_info_ref;
        inline app::SetMecanimTriggerAction__Class* get_class() {
            return il2cpp::get_class<app::SetMecanimTriggerAction__Class>(type_info, "", "SetMecanimTriggerAction");
        }
        inline app::SetMecanimTriggerAction* create() {
            return il2cpp::create_object<app::SetMecanimTriggerAction>(get_class());
        }
    } // namespace SetMecanimTriggerAction
} // namespace app::classes::types
