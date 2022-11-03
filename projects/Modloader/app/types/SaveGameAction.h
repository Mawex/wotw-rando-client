#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveGameAction {
        namespace {
            inline app::SaveGameAction__Class* type_info_ref = nullptr;
        }
        inline app::SaveGameAction__Class** type_info = &type_info_ref;
        inline app::SaveGameAction__Class* get_class() {
            return il2cpp::get_class<app::SaveGameAction__Class>(type_info, "", "SaveGameAction");
        }
        inline app::SaveGameAction* create() {
            return il2cpp::create_object<app::SaveGameAction>(get_class());
        }
    } // namespace SaveGameAction
} // namespace app::classes::types
