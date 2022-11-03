#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollapsingSolid {
        namespace {
            inline app::CollapsingSolid__Class* type_info_ref = nullptr;
        }
        inline app::CollapsingSolid__Class** type_info = &type_info_ref;
        inline app::CollapsingSolid__Class* get_class() {
            return il2cpp::get_class<app::CollapsingSolid__Class>(type_info, "", "CollapsingSolid");
        }
        inline app::CollapsingSolid* create() {
            return il2cpp::create_object<app::CollapsingSolid>(get_class());
        }
    } // namespace CollapsingSolid
} // namespace app::classes::types
