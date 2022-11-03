#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Shelf {
        namespace {
            inline app::Shelf__Class* type_info_ref = nullptr;
        }
        inline app::Shelf__Class** type_info = &type_info_ref;
        inline app::Shelf__Class* get_class() {
            return il2cpp::get_class<app::Shelf__Class>(type_info, "", "Shelf");
        }
        inline app::Shelf* create() {
            return il2cpp::create_object<app::Shelf>(get_class());
        }
        inline app::Shelf__Array* create_array(int size) {
            return il2cpp::array_new<app::Shelf__Array>(get_class(), size);
        }
        inline app::Shelf__Array* create_array(const std::vector<app::Shelf*>& items) {
            return il2cpp::array_new<app::Shelf__Array>(get_class(), items);
        }
    } // namespace Shelf
} // namespace app::classes::types
