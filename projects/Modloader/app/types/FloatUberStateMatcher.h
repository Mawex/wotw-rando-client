#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatUberStateMatcher {
        namespace {
            inline app::FloatUberStateMatcher__Class* type_info_ref = nullptr;
        }
        inline app::FloatUberStateMatcher__Class** type_info = &type_info_ref;
        inline app::FloatUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::FloatUberStateMatcher__Class>(type_info, "", "FloatUberStateMatcher");
        }
        inline app::FloatUberStateMatcher* create() {
            return il2cpp::create_object<app::FloatUberStateMatcher>(get_class());
        }
    } // namespace FloatUberStateMatcher
} // namespace app::classes::types
