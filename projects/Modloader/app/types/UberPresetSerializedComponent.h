#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent {
        namespace {
            inline app::UberPresetSerializedComponent__Class* type_info_ref = nullptr;
        }
        inline app::UberPresetSerializedComponent__Class** type_info = &type_info_ref;
        inline app::UberPresetSerializedComponent__Class* get_class() {
            return il2cpp::get_class<app::UberPresetSerializedComponent__Class>(type_info, "", "UberPresetSerializedComponent");
        }
        inline app::UberPresetSerializedComponent* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent>(get_class());
        }
        inline app::UberPresetSerializedComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPresetSerializedComponent__Array>(get_class(), size);
        }
        inline app::UberPresetSerializedComponent__Array* create_array(const std::vector<app::UberPresetSerializedComponent*>& items) {
            return il2cpp::array_new<app::UberPresetSerializedComponent__Array>(get_class(), items);
        }
    } // namespace UberPresetSerializedComponent
} // namespace app::classes::types
