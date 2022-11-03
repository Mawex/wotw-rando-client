#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossBeamAttackSettings {
        namespace {
            inline app::LaserShooterMinibossBeamAttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossBeamAttackSettings__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossBeamAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossBeamAttackSettings__Class>(type_info, "", "LaserShooterMinibossBeamAttackSettings");
        }
        inline app::LaserShooterMinibossBeamAttackSettings* create() {
            return il2cpp::create_object<app::LaserShooterMinibossBeamAttackSettings>(get_class());
        }
    } // namespace LaserShooterMinibossBeamAttackSettings
} // namespace app::classes::types
