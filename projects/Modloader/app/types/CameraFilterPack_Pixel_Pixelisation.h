#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Pixel_Pixelisation {
        inline app::CameraFilterPack_Pixel_Pixelisation__Class** type_info = (app::CameraFilterPack_Pixel_Pixelisation__Class**)(modloader::win::memory::resolve_rva(0x0473CF88));
        inline app::CameraFilterPack_Pixel_Pixelisation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Pixel_Pixelisation__Class>(type_info, "", "CameraFilterPack_Pixel_Pixelisation");
        }
        inline app::CameraFilterPack_Pixel_Pixelisation* create() {
            return il2cpp::create_object<app::CameraFilterPack_Pixel_Pixelisation>(get_class());
        }
    } // namespace CameraFilterPack_Pixel_Pixelisation
} // namespace app::classes::types
