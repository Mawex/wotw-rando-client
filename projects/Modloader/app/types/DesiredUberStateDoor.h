#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesiredUberStateDoor {
        namespace {
            inline app::DesiredUberStateDoor__Class* type_info_ref = nullptr;
        }
        inline app::DesiredUberStateDoor__Class** type_info = &type_info_ref;
        inline app::DesiredUberStateDoor__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateDoor__Class>(type_info, "", "DesiredUberStateDoor");
        }
        inline app::DesiredUberStateDoor* create() {
            return il2cpp::create_object<app::DesiredUberStateDoor>(get_class());
        }
    } // namespace DesiredUberStateDoor
} // namespace app::classes::types
