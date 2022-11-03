#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FingerRig {
        namespace {
            inline app::FingerRig__Class* type_info_ref = nullptr;
        }
        inline app::FingerRig__Class** type_info = &type_info_ref;
        inline app::FingerRig__Class* get_class() {
            return il2cpp::get_class<app::FingerRig__Class>(type_info, "RootMotion.FinalIK", "FingerRig");
        }
        inline app::FingerRig* create() {
            return il2cpp::create_object<app::FingerRig>(get_class());
        }
    } // namespace FingerRig
} // namespace app::classes::types
