#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasVisitedOrDiscoveredAreaCondition {
        namespace {
            inline app::HasVisitedOrDiscoveredAreaCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasVisitedOrDiscoveredAreaCondition__Class** type_info = &type_info_ref;
        inline app::HasVisitedOrDiscoveredAreaCondition__Class* get_class() {
            return il2cpp::get_class<app::HasVisitedOrDiscoveredAreaCondition__Class>(type_info, "", "HasVisitedOrDiscoveredAreaCondition");
        }
        inline app::HasVisitedOrDiscoveredAreaCondition* create() {
            return il2cpp::create_object<app::HasVisitedOrDiscoveredAreaCondition>(get_class());
        }
    } // namespace HasVisitedOrDiscoveredAreaCondition
} // namespace app::classes::types
