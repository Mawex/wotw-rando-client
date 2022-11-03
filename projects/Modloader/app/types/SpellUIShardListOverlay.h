#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellUIShardListOverlay {
        namespace {
            inline app::SpellUIShardListOverlay__Class* type_info_ref = nullptr;
        }
        inline app::SpellUIShardListOverlay__Class** type_info = &type_info_ref;
        inline app::SpellUIShardListOverlay__Class* get_class() {
            return il2cpp::get_class<app::SpellUIShardListOverlay__Class>(type_info, "", "SpellUIShardListOverlay");
        }
        inline app::SpellUIShardListOverlay* create() {
            return il2cpp::create_object<app::SpellUIShardListOverlay>(get_class());
        }
    } // namespace SpellUIShardListOverlay
} // namespace app::classes::types
