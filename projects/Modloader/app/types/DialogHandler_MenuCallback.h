#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DialogHandler_MenuCallback {
        inline app::DialogHandler_MenuCallback__Class** type_info = (app::DialogHandler_MenuCallback__Class**)(modloader::win::memory::resolve_rva(0x04755DC0));
        inline app::DialogHandler_MenuCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogHandler_MenuCallback__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DialogHandler", "MenuCallback");
        }
        inline app::DialogHandler_MenuCallback* create() {
            return il2cpp::create_object<app::DialogHandler_MenuCallback>(get_class());
        }
    } // namespace DialogHandler_MenuCallback
} // namespace app::classes::types
