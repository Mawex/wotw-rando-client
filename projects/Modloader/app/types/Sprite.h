#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sprite {
        namespace {
            inline app::Sprite__Class* type_info_ref = nullptr;
        }
        inline app::Sprite__Class** type_info = &type_info_ref;
        inline app::Sprite__Class* get_class() {
            return il2cpp::get_class<app::Sprite__Class>(type_info, "UnityEngine", "Sprite");
        }
        inline app::Sprite* create() {
            return il2cpp::create_object<app::Sprite>(get_class());
        }
        inline app::Sprite__Array* create_array(int size) {
            return il2cpp::array_new<app::Sprite__Array>(get_class(), size);
        }
        inline app::Sprite__Array* create_array(const std::vector<app::Sprite*>& items) {
            return il2cpp::array_new<app::Sprite__Array>(get_class(), items);
        }
    } // namespace Sprite
} // namespace app::classes::types
