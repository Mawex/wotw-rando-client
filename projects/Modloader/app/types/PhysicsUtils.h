#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsUtils {
        inline app::PhysicsUtils__Class** type_info = (app::PhysicsUtils__Class**)(modloader::win::memory::resolve_rva(0x04793708));
        inline app::PhysicsUtils__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUtils__Class>(type_info, "", "PhysicsUtils");
        }
        inline app::PhysicsUtils* create() {
            return il2cpp::create_object<app::PhysicsUtils>(get_class());
        }
    } // namespace PhysicsUtils
} // namespace app::classes::types
