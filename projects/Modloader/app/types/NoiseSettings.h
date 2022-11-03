#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NoiseSettings {
        inline app::NoiseSettings__Class** type_info = (app::NoiseSettings__Class**)(modloader::win::memory::resolve_rva(0x04764C38));
        inline app::NoiseSettings__Class* get_class() {
            return il2cpp::get_class<app::NoiseSettings__Class>(type_info, "", "NoiseSettings");
        }
        inline app::NoiseSettings* create() {
            return il2cpp::create_object<app::NoiseSettings>(get_class());
        }
    } // namespace NoiseSettings
} // namespace app::classes::types
