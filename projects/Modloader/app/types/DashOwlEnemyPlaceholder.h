#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlEnemyPlaceholder {
        namespace {
            inline app::DashOwlEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::DashOwlEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::DashOwlEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemyPlaceholder__Class>(type_info, "", "DashOwlEnemyPlaceholder");
        }
        inline app::DashOwlEnemyPlaceholder* create() {
            return il2cpp::create_object<app::DashOwlEnemyPlaceholder>(get_class());
        }
    } // namespace DashOwlEnemyPlaceholder
} // namespace app::classes::types
