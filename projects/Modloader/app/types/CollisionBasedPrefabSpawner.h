#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollisionBasedPrefabSpawner {
        namespace {
            inline app::CollisionBasedPrefabSpawner__Class* type_info_ref = nullptr;
        }
        inline app::CollisionBasedPrefabSpawner__Class** type_info = &type_info_ref;
        inline app::CollisionBasedPrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::CollisionBasedPrefabSpawner__Class>(type_info, "Moon", "CollisionBasedPrefabSpawner");
        }
        inline app::CollisionBasedPrefabSpawner* create() {
            return il2cpp::create_object<app::CollisionBasedPrefabSpawner>(get_class());
        }
    } // namespace CollisionBasedPrefabSpawner
} // namespace app::classes::types
