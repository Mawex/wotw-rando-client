#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentaclePlaceholder {
        namespace {
            inline app::TentaclePlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::TentaclePlaceholder__Class** type_info = &type_info_ref;
        inline app::TentaclePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::TentaclePlaceholder__Class>(type_info, "", "TentaclePlaceholder");
        }
        inline app::TentaclePlaceholder* create() {
            return il2cpp::create_object<app::TentaclePlaceholder>(get_class());
        }
    } // namespace TentaclePlaceholder
} // namespace app::classes::types
