#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuDash_PreDashDelegateType {
        inline app::KuDash_PreDashDelegateType__Class** type_info = (app::KuDash_PreDashDelegateType__Class**)(modloader::win::memory::resolve_rva(0x04730278));
        inline app::KuDash_PreDashDelegateType__Class* get_class() {
            return il2cpp::get_nested_class<app::KuDash_PreDashDelegateType__Class>(type_info, "", "KuDash", "PreDashDelegateType");
        }
        inline app::KuDash_PreDashDelegateType* create() {
            return il2cpp::create_object<app::KuDash_PreDashDelegateType>(get_class());
        }
    } // namespace KuDash_PreDashDelegateType
} // namespace app::classes::types
