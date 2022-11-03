#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VRMainControlPanel {
        inline app::VRMainControlPanel__Class** type_info = (app::VRMainControlPanel__Class**)(modloader::win::memory::resolve_rva(0x047286C0));
        inline app::VRMainControlPanel__Class* get_class() {
            return il2cpp::get_class<app::VRMainControlPanel__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "VRMainControlPanel");
        }
        inline app::VRMainControlPanel* create() {
            return il2cpp::create_object<app::VRMainControlPanel>(get_class());
        }
    } // namespace VRMainControlPanel
} // namespace app::classes::types
