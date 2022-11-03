#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundQuickStopBehaviour {
        namespace {
            inline app::GroundQuickStopBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::GroundQuickStopBehaviour__Class** type_info = &type_info_ref;
        inline app::GroundQuickStopBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundQuickStopBehaviour__Class>(type_info, "Moon", "GroundQuickStopBehaviour");
        }
        inline app::GroundQuickStopBehaviour* create() {
            return il2cpp::create_object<app::GroundQuickStopBehaviour>(get_class());
        }
    } // namespace GroundQuickStopBehaviour
} // namespace app::classes::types
