#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComVisibleAttribute {
        namespace {
            inline app::ComVisibleAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ComVisibleAttribute__Class** type_info = &type_info_ref;
        inline app::ComVisibleAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComVisibleAttribute__Class>(type_info, "System.Runtime.InteropServices", "ComVisibleAttribute");
        }
        inline app::ComVisibleAttribute* create() {
            return il2cpp::create_object<app::ComVisibleAttribute>(get_class());
        }
    } // namespace ComVisibleAttribute
} // namespace app::classes::types
