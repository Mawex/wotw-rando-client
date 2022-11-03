#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AimIK {
        inline app::AimIK__Class** type_info = (app::AimIK__Class**)(modloader::win::memory::resolve_rva(0x04785A48));
        inline app::AimIK__Class* get_class() {
            return il2cpp::get_class<app::AimIK__Class>(type_info, "RootMotion.FinalIK", "AimIK");
        }
        inline app::AimIK* create() {
            return il2cpp::create_object<app::AimIK>(get_class());
        }
    } // namespace AimIK
} // namespace app::classes::types
