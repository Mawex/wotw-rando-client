#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossBeamAttackBehaviour {
        namespace {
            inline app::LaserShooterMinibossBeamAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossBeamAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossBeamAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossBeamAttackBehaviour__Class>(type_info, "", "LaserShooterMinibossBeamAttackBehaviour");
        }
        inline app::LaserShooterMinibossBeamAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossBeamAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossBeamAttackBehaviour
} // namespace app::classes::types
