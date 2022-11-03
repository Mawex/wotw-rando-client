#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKExecutionOrder {
        namespace {
            inline app::IKExecutionOrder__Class* type_info_ref = nullptr;
        }
        inline app::IKExecutionOrder__Class** type_info = &type_info_ref;
        inline app::IKExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::IKExecutionOrder__Class>(type_info, "RootMotion.FinalIK", "IKExecutionOrder");
        }
        inline app::IKExecutionOrder* create() {
            return il2cpp::create_object<app::IKExecutionOrder>(get_class());
        }
    } // namespace IKExecutionOrder
} // namespace app::classes::types
