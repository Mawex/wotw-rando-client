#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionalDialogTransition {
        namespace {
            inline app::ConditionalDialogTransition__Class* type_info_ref = nullptr;
        }
        inline app::ConditionalDialogTransition__Class** type_info = &type_info_ref;
        inline app::ConditionalDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::ConditionalDialogTransition__Class>(type_info, "", "ConditionalDialogTransition");
        }
        inline app::ConditionalDialogTransition* create() {
            return il2cpp::create_object<app::ConditionalDialogTransition>(get_class());
        }
    } // namespace ConditionalDialogTransition
} // namespace app::classes::types
