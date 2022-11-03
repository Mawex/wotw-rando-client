#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasOreCondition {
        namespace {
            inline app::HasOreCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasOreCondition__Class** type_info = &type_info_ref;
        inline app::HasOreCondition__Class* get_class() {
            return il2cpp::get_class<app::HasOreCondition__Class>(type_info, "", "HasOreCondition");
        }
        inline app::HasOreCondition* create() {
            return il2cpp::create_object<app::HasOreCondition>(get_class());
        }
    } // namespace HasOreCondition
} // namespace app::classes::types
