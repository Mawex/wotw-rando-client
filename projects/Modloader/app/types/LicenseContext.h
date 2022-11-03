#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LicenseContext {
        namespace {
            inline app::LicenseContext__Class* type_info_ref = nullptr;
        }
        inline app::LicenseContext__Class** type_info = &type_info_ref;
        inline app::LicenseContext__Class* get_class() {
            return il2cpp::get_class<app::LicenseContext__Class>(type_info, "System.ComponentModel", "LicenseContext");
        }
        inline app::LicenseContext* create() {
            return il2cpp::create_object<app::LicenseContext>(get_class());
        }
    } // namespace LicenseContext
} // namespace app::classes::types
