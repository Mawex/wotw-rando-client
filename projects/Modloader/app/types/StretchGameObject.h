#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StretchGameObject {
        namespace {
            inline app::StretchGameObject__Class* type_info_ref = nullptr;
        }
        inline app::StretchGameObject__Class** type_info = &type_info_ref;
        inline app::StretchGameObject__Class* get_class() {
            return il2cpp::get_class<app::StretchGameObject__Class>(type_info, "", "StretchGameObject");
        }
        inline app::StretchGameObject* create() {
            return il2cpp::create_object<app::StretchGameObject>(get_class());
        }
        inline app::StretchGameObject__Array* create_array(int size) {
            return il2cpp::array_new<app::StretchGameObject__Array>(get_class(), size);
        }
        inline app::StretchGameObject__Array* create_array(const std::vector<app::StretchGameObject*>& items) {
            return il2cpp::array_new<app::StretchGameObject__Array>(get_class(), items);
        }
    } // namespace StretchGameObject
} // namespace app::classes::types
