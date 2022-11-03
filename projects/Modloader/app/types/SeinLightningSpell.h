#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLightningSpell {
        namespace {
            inline app::SeinLightningSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinLightningSpell__Class** type_info = &type_info_ref;
        inline app::SeinLightningSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLightningSpell__Class>(type_info, "", "SeinLightningSpell");
        }
        inline app::SeinLightningSpell* create() {
            return il2cpp::create_object<app::SeinLightningSpell>(get_class());
        }
    } // namespace SeinLightningSpell
} // namespace app::classes::types
