#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShopkeeperUISubItem {
        namespace {
            inline app::ShopkeeperUISubItem__Class* type_info_ref = nullptr;
        }
        inline app::ShopkeeperUISubItem__Class** type_info = &type_info_ref;
        inline app::ShopkeeperUISubItem__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperUISubItem__Class>(type_info, "", "ShopkeeperUISubItem");
        }
        inline app::ShopkeeperUISubItem* create() {
            return il2cpp::create_object<app::ShopkeeperUISubItem>(get_class());
        }
    } // namespace ShopkeeperUISubItem
} // namespace app::classes::types
