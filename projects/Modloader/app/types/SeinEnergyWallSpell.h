#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEnergyWallSpell {
        namespace {
            inline app::SeinEnergyWallSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnergyWallSpell__Class** type_info = &type_info_ref;
        inline app::SeinEnergyWallSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyWallSpell__Class>(type_info, "", "SeinEnergyWallSpell");
        }
        inline app::SeinEnergyWallSpell* create() {
            return il2cpp::create_object<app::SeinEnergyWallSpell>(get_class());
        }
    } // namespace SeinEnergyWallSpell
} // namespace app::classes::types
