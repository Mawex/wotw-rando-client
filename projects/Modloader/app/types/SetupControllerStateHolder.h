#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetupControllerStateHolder {
        namespace {
            inline app::SetupControllerStateHolder__Class* type_info_ref = nullptr;
        }
        inline app::SetupControllerStateHolder__Class** type_info = &type_info_ref;
        inline app::SetupControllerStateHolder__Class* get_class() {
            return il2cpp::get_class<app::SetupControllerStateHolder__Class>(type_info, "", "SetupControllerStateHolder");
        }
        inline app::SetupControllerStateHolder* create() {
            return il2cpp::create_object<app::SetupControllerStateHolder>(get_class());
        }
    } // namespace SetupControllerStateHolder
} // namespace app::classes::types
