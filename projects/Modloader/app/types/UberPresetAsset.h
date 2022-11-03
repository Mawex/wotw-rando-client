#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPresetAsset {
        namespace {
            inline app::UberPresetAsset__Class* type_info_ref = nullptr;
        }
        inline app::UberPresetAsset__Class** type_info = &type_info_ref;
        inline app::UberPresetAsset__Class* get_class() {
            return il2cpp::get_class<app::UberPresetAsset__Class>(type_info, "", "UberPresetAsset");
        }
        inline app::UberPresetAsset* create() {
            return il2cpp::create_object<app::UberPresetAsset>(get_class());
        }
        inline app::UberPresetAsset__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPresetAsset__Array>(get_class(), size);
        }
        inline app::UberPresetAsset__Array* create_array(const std::vector<app::UberPresetAsset*>& items) {
            return il2cpp::array_new<app::UberPresetAsset__Array>(get_class(), items);
        }
    } // namespace UberPresetAsset
} // namespace app::classes::types
