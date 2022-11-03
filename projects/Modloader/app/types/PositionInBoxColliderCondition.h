#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionInBoxColliderCondition {
        namespace {
            inline app::PositionInBoxColliderCondition__Class* type_info_ref = nullptr;
        }
        inline app::PositionInBoxColliderCondition__Class** type_info = &type_info_ref;
        inline app::PositionInBoxColliderCondition__Class* get_class() {
            return il2cpp::get_class<app::PositionInBoxColliderCondition__Class>(type_info, "Moon.BehaviourSystem", "PositionInBoxColliderCondition");
        }
        inline app::PositionInBoxColliderCondition* create() {
            return il2cpp::create_object<app::PositionInBoxColliderCondition>(get_class());
        }
    } // namespace PositionInBoxColliderCondition
} // namespace app::classes::types
