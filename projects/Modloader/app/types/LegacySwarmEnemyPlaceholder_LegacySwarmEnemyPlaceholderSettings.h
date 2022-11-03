#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings {
        namespace {
            inline app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class>(type_info, "", "LegacySwarmEnemyPlaceholder", "LegacySwarmEnemyPlaceholderSettings");
        }
        inline app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings>(get_class());
        }
    } // namespace LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings
} // namespace app::classes::types
