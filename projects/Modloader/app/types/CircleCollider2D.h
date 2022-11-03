#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CircleCollider2D {
        namespace {
            inline app::CircleCollider2D__Class* type_info_ref = nullptr;
        }
        inline app::CircleCollider2D__Class** type_info = &type_info_ref;
        inline app::CircleCollider2D__Class* get_class() {
            return il2cpp::get_class<app::CircleCollider2D__Class>(type_info, "UnityEngine", "CircleCollider2D");
        }
        inline app::CircleCollider2D* create() {
            return il2cpp::create_object<app::CircleCollider2D>(get_class());
        }
    } // namespace CircleCollider2D
} // namespace app::classes::types
