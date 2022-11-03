#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowMainMenuAction {
        namespace {
            inline app::ShowMainMenuAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowMainMenuAction__Class** type_info = &type_info_ref;
        inline app::ShowMainMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ShowMainMenuAction__Class>(type_info, "", "ShowMainMenuAction");
        }
        inline app::ShowMainMenuAction* create() {
            return il2cpp::create_object<app::ShowMainMenuAction>(get_class());
        }
    } // namespace ShowMainMenuAction
} // namespace app::classes::types
