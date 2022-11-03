#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HomingMissile {
        namespace {
            inline app::HomingMissile__Class* type_info_ref = nullptr;
        }
        inline app::HomingMissile__Class** type_info = &type_info_ref;
        inline app::HomingMissile__Class* get_class() {
            return il2cpp::get_class<app::HomingMissile__Class>(type_info, "", "HomingMissile");
        }
        inline app::HomingMissile* create() {
            return il2cpp::create_object<app::HomingMissile>(get_class());
        }
    } // namespace HomingMissile
} // namespace app::classes::types
