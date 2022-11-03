#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShopkeeperUIDetails {
        namespace {
            inline app::ShopkeeperUIDetails__Class* type_info_ref = nullptr;
        }
        inline app::ShopkeeperUIDetails__Class** type_info = &type_info_ref;
        inline app::ShopkeeperUIDetails__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperUIDetails__Class>(type_info, "", "ShopkeeperUIDetails");
        }
        inline app::ShopkeeperUIDetails* create() {
            return il2cpp::create_object<app::ShopkeeperUIDetails>(get_class());
        }
    } // namespace ShopkeeperUIDetails
} // namespace app::classes::types
