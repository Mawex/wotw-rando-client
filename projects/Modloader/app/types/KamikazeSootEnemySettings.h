#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSootEnemySettings {
        namespace {
            inline app::KamikazeSootEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeSootEnemySettings__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemySettings__Class>(type_info, "", "KamikazeSootEnemySettings");
        }
        inline app::KamikazeSootEnemySettings* create() {
            return il2cpp::create_object<app::KamikazeSootEnemySettings>(get_class());
        }
    } // namespace KamikazeSootEnemySettings
} // namespace app::classes::types
