#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Certificate2Enumerator {
        inline app::X509Certificate2Enumerator__Class** type_info = (app::X509Certificate2Enumerator__Class**)(modloader::win::memory::resolve_rva(0x04711230));
        inline app::X509Certificate2Enumerator__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate2Enumerator__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Certificate2Enumerator");
        }
        inline app::X509Certificate2Enumerator* create() {
            return il2cpp::create_object<app::X509Certificate2Enumerator>(get_class());
        }
    } // namespace X509Certificate2Enumerator
} // namespace app::classes::types
