#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Avatar {
        namespace {
            inline app::Avatar__Class* type_info_ref = nullptr;
        }
        inline app::Avatar__Class** type_info = &type_info_ref;
        inline app::Avatar__Class* get_class() {
            return il2cpp::get_class<app::Avatar__Class>(type_info, "UnityEngine", "Avatar");
        }
        inline app::Avatar* create() {
            return il2cpp::create_object<app::Avatar>(get_class());
        }
    } // namespace Avatar
} // namespace app::classes::types
