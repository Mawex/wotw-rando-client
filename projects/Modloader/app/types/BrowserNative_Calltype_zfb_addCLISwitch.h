#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_addCLISwitch {
        namespace {
            inline app::BrowserNative_Calltype_zfb_addCLISwitch__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_addCLISwitch__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_addCLISwitch__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_addCLISwitch__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_addCLISwitch");
        }
        inline app::BrowserNative_Calltype_zfb_addCLISwitch* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_addCLISwitch>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_addCLISwitch
} // namespace app::classes::types
