#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugRaycastCheck {
        namespace {
            inline app::DebugRaycastCheck__Class* type_info_ref = nullptr;
        }
        inline app::DebugRaycastCheck__Class** type_info = &type_info_ref;
        inline app::DebugRaycastCheck__Class* get_class() {
            return il2cpp::get_class<app::DebugRaycastCheck__Class>(type_info, "", "DebugRaycastCheck");
        }
        inline app::DebugRaycastCheck* create() {
            return il2cpp::create_object<app::DebugRaycastCheck>(get_class());
        }
    } // namespace DebugRaycastCheck
} // namespace app::classes::types
