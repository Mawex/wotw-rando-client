#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrepareToContinueGameAction {
        namespace {
            inline app::PrepareToContinueGameAction__Class* type_info_ref = nullptr;
        }
        inline app::PrepareToContinueGameAction__Class** type_info = &type_info_ref;
        inline app::PrepareToContinueGameAction__Class* get_class() {
            return il2cpp::get_class<app::PrepareToContinueGameAction__Class>(type_info, "", "PrepareToContinueGameAction");
        }
        inline app::PrepareToContinueGameAction* create() {
            return il2cpp::create_object<app::PrepareToContinueGameAction>(get_class());
        }
    } // namespace PrepareToContinueGameAction
} // namespace app::classes::types
