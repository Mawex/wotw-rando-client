#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyAnimations {
        namespace {
            inline app::LegacySwarmEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::LegacySwarmEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyAnimations__Class>(type_info, "", "LegacySwarmEnemyAnimations");
        }
        inline app::LegacySwarmEnemyAnimations* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyAnimations>(get_class());
        }
    } // namespace LegacySwarmEnemyAnimations
} // namespace app::classes::types
