#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrabPlaceholder {
        namespace {
            inline app::CrabPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::CrabPlaceholder__Class** type_info = &type_info_ref;
        inline app::CrabPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrabPlaceholder__Class>(type_info, "", "CrabPlaceholder");
        }
        inline app::CrabPlaceholder* create() {
            return il2cpp::create_object<app::CrabPlaceholder>(get_class());
        }
    } // namespace CrabPlaceholder
} // namespace app::classes::types
