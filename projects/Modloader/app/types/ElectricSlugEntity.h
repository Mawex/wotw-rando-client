#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ElectricSlugEntity {
        namespace {
            inline app::ElectricSlugEntity__Class* type_info_ref = nullptr;
        }
        inline app::ElectricSlugEntity__Class** type_info = &type_info_ref;
        inline app::ElectricSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::ElectricSlugEntity__Class>(type_info, "", "ElectricSlugEntity");
        }
        inline app::ElectricSlugEntity* create() {
            return il2cpp::create_object<app::ElectricSlugEntity>(get_class());
        }
    } // namespace ElectricSlugEntity
} // namespace app::classes::types
