#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_keyEvent {
        namespace {
            inline app::BrowserNative_Calltype_zfb_keyEvent__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_keyEvent__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_keyEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_keyEvent__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_keyEvent");
        }
        inline app::BrowserNative_Calltype_zfb_keyEvent* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_keyEvent>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_keyEvent
} // namespace app::classes::types
