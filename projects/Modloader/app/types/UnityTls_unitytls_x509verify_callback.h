#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509verify_callback {
        namespace {
            inline app::UnityTls_unitytls_x509verify_callback__Class* type_info_ref = nullptr;
        }
        inline app::UnityTls_unitytls_x509verify_callback__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_x509verify_callback__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_x509verify_callback__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_x509verify_callback");
        }
        inline app::UnityTls_unitytls_x509verify_callback* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509verify_callback>(get_class());
        }
    } // namespace UnityTls_unitytls_x509verify_callback
} // namespace app::classes::types
