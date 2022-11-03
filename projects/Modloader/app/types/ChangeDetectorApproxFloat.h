#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeDetectorApproxFloat {
        namespace {
            inline app::ChangeDetectorApproxFloat__Class* type_info_ref = nullptr;
        }
        inline app::ChangeDetectorApproxFloat__Class** type_info = &type_info_ref;
        inline app::ChangeDetectorApproxFloat__Class* get_class() {
            return il2cpp::get_class<app::ChangeDetectorApproxFloat__Class>(type_info, "", "ChangeDetectorApproxFloat");
        }
        inline app::ChangeDetectorApproxFloat* create() {
            return il2cpp::create_object<app::ChangeDetectorApproxFloat>(get_class());
        }
    } // namespace ChangeDetectorApproxFloat
} // namespace app::classes::types
