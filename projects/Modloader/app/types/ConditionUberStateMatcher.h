#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionUberStateMatcher {
        namespace {
            inline app::ConditionUberStateMatcher__Class* type_info_ref = nullptr;
        }
        inline app::ConditionUberStateMatcher__Class** type_info = &type_info_ref;
        inline app::ConditionUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::ConditionUberStateMatcher__Class>(type_info, "", "ConditionUberStateMatcher");
        }
        inline app::ConditionUberStateMatcher* create() {
            return il2cpp::create_object<app::ConditionUberStateMatcher>(get_class());
        }
    } // namespace ConditionUberStateMatcher
} // namespace app::classes::types
