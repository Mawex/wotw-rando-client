#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WarningException {
        namespace {
            inline app::WarningException__Class* type_info_ref = nullptr;
        }
        inline app::WarningException__Class** type_info = &type_info_ref;
        inline app::WarningException__Class* get_class() {
            return il2cpp::get_class<app::WarningException__Class>(type_info, "System.ComponentModel", "WarningException");
        }
        inline app::WarningException* create() {
            return il2cpp::create_object<app::WarningException>(get_class());
        }
    } // namespace WarningException
} // namespace app::classes::types
