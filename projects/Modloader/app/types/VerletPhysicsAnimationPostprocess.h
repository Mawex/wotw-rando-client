#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess {
        inline app::VerletPhysicsAnimationPostprocess__Class** type_info = (app::VerletPhysicsAnimationPostprocess__Class**)(modloader::win::memory::resolve_rva(0x0470A068));
        inline app::VerletPhysicsAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::VerletPhysicsAnimationPostprocess__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess");
        }
        inline app::VerletPhysicsAnimationPostprocess* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess>(get_class());
        }
        inline app::VerletPhysicsAnimationPostprocess__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletPhysicsAnimationPostprocess__Array>(get_class(), size);
        }
        inline app::VerletPhysicsAnimationPostprocess__Array* create_array(const std::vector<app::VerletPhysicsAnimationPostprocess*>& items) {
            return il2cpp::array_new<app::VerletPhysicsAnimationPostprocess__Array>(get_class(), items);
        }
    } // namespace VerletPhysicsAnimationPostprocess
} // namespace app::classes::types
