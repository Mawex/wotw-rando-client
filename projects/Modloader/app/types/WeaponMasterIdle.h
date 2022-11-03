#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponMasterIdle {
        namespace {
            inline app::WeaponMasterIdle__Class* type_info_ref = nullptr;
        }
        inline app::WeaponMasterIdle__Class** type_info = &type_info_ref;
        inline app::WeaponMasterIdle__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterIdle__Class>(type_info, "", "WeaponMasterIdle");
        }
        inline app::WeaponMasterIdle* create() {
            return il2cpp::create_object<app::WeaponMasterIdle>(get_class());
        }
    } // namespace WeaponMasterIdle
} // namespace app::classes::types
