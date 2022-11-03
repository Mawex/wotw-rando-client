#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_mouseButton {
        namespace {
            inline app::BrowserNative_Calltype_zfb_mouseButton__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_mouseButton__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_mouseButton__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_mouseButton__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_mouseButton");
        }
        inline app::BrowserNative_Calltype_zfb_mouseButton* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_mouseButton>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_mouseButton
} // namespace app::classes::types
