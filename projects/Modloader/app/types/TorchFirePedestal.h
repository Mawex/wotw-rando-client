#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TorchFirePedestal {
        namespace {
            inline app::TorchFirePedestal__Class* type_info_ref = nullptr;
        }
        inline app::TorchFirePedestal__Class** type_info = &type_info_ref;
        inline app::TorchFirePedestal__Class* get_class() {
            return il2cpp::get_class<app::TorchFirePedestal__Class>(type_info, "", "TorchFirePedestal");
        }
        inline app::TorchFirePedestal* create() {
            return il2cpp::create_object<app::TorchFirePedestal>(get_class());
        }
    } // namespace TorchFirePedestal
} // namespace app::classes::types
