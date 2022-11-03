#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FogSettings {
        namespace {
            inline app::FogSettings__Class* type_info_ref = nullptr;
        }
        inline app::FogSettings__Class** type_info = &type_info_ref;
        inline app::FogSettings__Class* get_class() {
            return il2cpp::get_class<app::FogSettings__Class>(type_info, "", "FogSettings");
        }
        inline app::FogSettings* create() {
            return il2cpp::create_object<app::FogSettings>(get_class());
        }
        inline app::FogSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::FogSettings__Array>(get_class(), size);
        }
        inline app::FogSettings__Array* create_array(const std::vector<app::FogSettings*>& items) {
            return il2cpp::array_new<app::FogSettings__Array>(get_class(), items);
        }
    } // namespace FogSettings
} // namespace app::classes::types
