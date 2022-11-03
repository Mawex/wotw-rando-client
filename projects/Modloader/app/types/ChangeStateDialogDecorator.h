#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeStateDialogDecorator {
        namespace {
            inline app::ChangeStateDialogDecorator__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateDialogDecorator__Class** type_info = &type_info_ref;
        inline app::ChangeStateDialogDecorator__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateDialogDecorator__Class>(type_info, "Moon.dialogGraph", "ChangeStateDialogDecorator");
        }
        inline app::ChangeStateDialogDecorator* create() {
            return il2cpp::create_object<app::ChangeStateDialogDecorator>(get_class());
        }
    } // namespace ChangeStateDialogDecorator
} // namespace app::classes::types
