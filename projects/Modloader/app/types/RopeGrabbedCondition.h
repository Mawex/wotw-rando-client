#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RopeGrabbedCondition {
        namespace {
            inline app::RopeGrabbedCondition__Class* type_info_ref = nullptr;
        }
        inline app::RopeGrabbedCondition__Class** type_info = &type_info_ref;
        inline app::RopeGrabbedCondition__Class* get_class() {
            return il2cpp::get_class<app::RopeGrabbedCondition__Class>(type_info, "", "RopeGrabbedCondition");
        }
        inline app::RopeGrabbedCondition* create() {
            return il2cpp::create_object<app::RopeGrabbedCondition>(get_class());
        }
    } // namespace RopeGrabbedCondition
} // namespace app::classes::types
