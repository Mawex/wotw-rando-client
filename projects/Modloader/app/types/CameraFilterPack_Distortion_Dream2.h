#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Dream2 {
        inline app::CameraFilterPack_Distortion_Dream2__Class** type_info = (app::CameraFilterPack_Distortion_Dream2__Class**)(modloader::win::memory::resolve_rva(0x04756BE8));
        inline app::CameraFilterPack_Distortion_Dream2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Dream2__Class>(type_info, "", "CameraFilterPack_Distortion_Dream2");
        }
        inline app::CameraFilterPack_Distortion_Dream2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Dream2>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Dream2
} // namespace app::classes::types
