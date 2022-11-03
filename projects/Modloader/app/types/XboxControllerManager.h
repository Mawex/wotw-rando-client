#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxControllerManager {
        inline app::XboxControllerManager__Class** type_info = (app::XboxControllerManager__Class**)(modloader::win::memory::resolve_rva(0x047690D0));
        inline app::XboxControllerManager__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerManager__Class>(type_info, "Core.Devices", "XboxControllerManager");
        }
        inline app::XboxControllerManager* create() {
            return il2cpp::create_object<app::XboxControllerManager>(get_class());
        }
    } // namespace XboxControllerManager
} // namespace app::classes::types
