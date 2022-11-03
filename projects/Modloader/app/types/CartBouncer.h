#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartBouncer {
        namespace {
            inline app::CartBouncer__Class* type_info_ref = nullptr;
        }
        inline app::CartBouncer__Class** type_info = &type_info_ref;
        inline app::CartBouncer__Class* get_class() {
            return il2cpp::get_class<app::CartBouncer__Class>(type_info, "", "CartBouncer");
        }
        inline app::CartBouncer* create() {
            return il2cpp::create_object<app::CartBouncer>(get_class());
        }
    } // namespace CartBouncer
} // namespace app::classes::types
