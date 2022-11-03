#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HoldingTorchCondition {
        namespace {
            inline app::HoldingTorchCondition__Class* type_info_ref = nullptr;
        }
        inline app::HoldingTorchCondition__Class** type_info = &type_info_ref;
        inline app::HoldingTorchCondition__Class* get_class() {
            return il2cpp::get_class<app::HoldingTorchCondition__Class>(type_info, "", "HoldingTorchCondition");
        }
        inline app::HoldingTorchCondition* create() {
            return il2cpp::create_object<app::HoldingTorchCondition>(get_class());
        }
    } // namespace HoldingTorchCondition
} // namespace app::classes::types
