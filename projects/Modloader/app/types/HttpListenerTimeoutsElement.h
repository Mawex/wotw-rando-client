#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpListenerTimeoutsElement {
        namespace {
            inline app::HttpListenerTimeoutsElement__Class* type_info_ref = nullptr;
        }
        inline app::HttpListenerTimeoutsElement__Class** type_info = &type_info_ref;
        inline app::HttpListenerTimeoutsElement__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerTimeoutsElement__Class>(type_info, "System.Net.Configuration", "HttpListenerTimeoutsElement");
        }
        inline app::HttpListenerTimeoutsElement* create() {
            return il2cpp::create_object<app::HttpListenerTimeoutsElement>(get_class());
        }
    } // namespace HttpListenerTimeoutsElement
} // namespace app::classes::types
