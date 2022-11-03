#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineStateCondition {
        namespace {
            inline app::TimelineStateCondition__Class* type_info_ref = nullptr;
        }
        inline app::TimelineStateCondition__Class** type_info = &type_info_ref;
        inline app::TimelineStateCondition__Class* get_class() {
            return il2cpp::get_class<app::TimelineStateCondition__Class>(type_info, "", "TimelineStateCondition");
        }
        inline app::TimelineStateCondition* create() {
            return il2cpp::create_object<app::TimelineStateCondition>(get_class());
        }
    } // namespace TimelineStateCondition
} // namespace app::classes::types
