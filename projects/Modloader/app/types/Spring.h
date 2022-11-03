#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Spring {
        namespace {
            inline app::Spring__Class* type_info_ref = nullptr;
        }
        inline app::Spring__Class** type_info = &type_info_ref;
        inline app::Spring__Class* get_class() {
            return il2cpp::get_class<app::Spring__Class>(type_info, "", "Spring");
        }
        inline app::Spring* create() {
            return il2cpp::create_object<app::Spring>(get_class());
        }
    } // namespace Spring
} // namespace app::classes::types
