#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityBehaviourParameter {
        namespace {
            inline app::EntityBehaviourParameter__Class* type_info_ref = nullptr;
        }
        inline app::EntityBehaviourParameter__Class** type_info = &type_info_ref;
        inline app::EntityBehaviourParameter__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourParameter__Class>(type_info, "Moon", "EntityBehaviourParameter");
        }
        inline app::EntityBehaviourParameter* create() {
            return il2cpp::create_object<app::EntityBehaviourParameter>(get_class());
        }
    } // namespace EntityBehaviourParameter
} // namespace app::classes::types
