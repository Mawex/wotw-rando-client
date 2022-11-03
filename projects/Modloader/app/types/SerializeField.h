#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializeField {
        namespace {
            inline app::SerializeField__Class* type_info_ref = nullptr;
        }
        inline app::SerializeField__Class** type_info = &type_info_ref;
        inline app::SerializeField__Class* get_class() {
            return il2cpp::get_class<app::SerializeField__Class>(type_info, "UnityEngine", "SerializeField");
        }
        inline app::SerializeField* create() {
            return il2cpp::create_object<app::SerializeField>(get_class());
        }
    } // namespace SerializeField
} // namespace app::classes::types
