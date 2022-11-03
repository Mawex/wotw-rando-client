#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ImmutableCollectionsUtils_ImmutableCollectionTypeInfo {
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class** type_info = (app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0471F560));
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class>(type_info, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils", "ImmutableCollectionTypeInfo");
        }
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo* create() {
            return il2cpp::create_object<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>(get_class());
        }
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array>(get_class(), size);
        }
        inline app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array* create_array(const std::vector<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo*>& items) {
            return il2cpp::array_new<app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Array>(get_class(), items);
        }
    } // namespace ImmutableCollectionsUtils_ImmutableCollectionTypeInfo
} // namespace app::classes::types
