#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriUpgradeMenuItem {
        namespace {
            inline app::OriUpgradeMenuItem__Class* type_info_ref = nullptr;
        }
        inline app::OriUpgradeMenuItem__Class** type_info = &type_info_ref;
        inline app::OriUpgradeMenuItem__Class* get_class() {
            return il2cpp::get_class<app::OriUpgradeMenuItem__Class>(type_info, "", "OriUpgradeMenuItem");
        }
        inline app::OriUpgradeMenuItem* create() {
            return il2cpp::create_object<app::OriUpgradeMenuItem>(get_class());
        }
    } // namespace OriUpgradeMenuItem
} // namespace app::classes::types
