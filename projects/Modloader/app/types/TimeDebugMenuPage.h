#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeDebugMenuPage {
        namespace {
            inline app::TimeDebugMenuPage__Class* type_info_ref = nullptr;
        }
        inline app::TimeDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::TimeDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::TimeDebugMenuPage__Class>(type_info, "", "TimeDebugMenuPage");
        }
        inline app::TimeDebugMenuPage* create() {
            return il2cpp::create_object<app::TimeDebugMenuPage>(get_class());
        }
    } // namespace TimeDebugMenuPage
} // namespace app::classes::types
