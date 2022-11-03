#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SphereCollider {
        inline app::SphereCollider__Class** type_info = (app::SphereCollider__Class**)(modloader::win::memory::resolve_rva(0x0477F318));
        inline app::SphereCollider__Class* get_class() {
            return il2cpp::get_class<app::SphereCollider__Class>(type_info, "UnityEngine", "SphereCollider");
        }
        inline app::SphereCollider* create() {
            return il2cpp::create_object<app::SphereCollider>(get_class());
        }
        inline app::SphereCollider__Array* create_array(int size) {
            return il2cpp::array_new<app::SphereCollider__Array>(get_class(), size);
        }
        inline app::SphereCollider__Array* create_array(const std::vector<app::SphereCollider*>& items) {
            return il2cpp::array_new<app::SphereCollider__Array>(get_class(), items);
        }
    } // namespace SphereCollider
} // namespace app::classes::types
