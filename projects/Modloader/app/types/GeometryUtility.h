#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GeometryUtility {
        namespace {
            inline app::GeometryUtility__Class* type_info_ref = nullptr;
        }
        inline app::GeometryUtility__Class** type_info = &type_info_ref;
        inline app::GeometryUtility__Class* get_class() {
            return il2cpp::get_class<app::GeometryUtility__Class>(type_info, "UnityEngine", "GeometryUtility");
        }
        inline app::GeometryUtility* create() {
            return il2cpp::create_object<app::GeometryUtility>(get_class());
        }
    } // namespace GeometryUtility
} // namespace app::classes::types
