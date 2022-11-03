#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CatalogItem {
        namespace {
            inline app::CatalogItem__Class* type_info_ref = nullptr;
        }
        inline app::CatalogItem__Class** type_info = &type_info_ref;
        inline app::CatalogItem__Class* get_class() {
            return il2cpp::get_class<app::CatalogItem__Class>(type_info, "PlayFab.ClientModels", "CatalogItem");
        }
        inline app::CatalogItem* create() {
            return il2cpp::create_object<app::CatalogItem>(get_class());
        }
        inline app::CatalogItem__Array* create_array(int size) {
            return il2cpp::array_new<app::CatalogItem__Array>(get_class(), size);
        }
        inline app::CatalogItem__Array* create_array(const std::vector<app::CatalogItem*>& items) {
            return il2cpp::array_new<app::CatalogItem__Array>(get_class(), items);
        }
    } // namespace CatalogItem
} // namespace app::classes::types
