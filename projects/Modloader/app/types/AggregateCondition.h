#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AggregateCondition {
        namespace {
            inline app::AggregateCondition__Class* type_info_ref = nullptr;
        }
        inline app::AggregateCondition__Class** type_info = &type_info_ref;
        inline app::AggregateCondition__Class* get_class() {
            return il2cpp::get_class<app::AggregateCondition__Class>(type_info, "", "AggregateCondition");
        }
        inline app::AggregateCondition* create() {
            return il2cpp::create_object<app::AggregateCondition>(get_class());
        }
    } // namespace AggregateCondition
} // namespace app::classes::types
