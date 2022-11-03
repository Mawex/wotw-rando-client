#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Noise_TV_3 {
        inline app::ShaderID_CameraFilterPack_Noise_TV_3__Class** type_info = (app::ShaderID_CameraFilterPack_Noise_TV_3__Class**)(modloader::win::memory::resolve_rva(0x04756378));
        inline app::ShaderID_CameraFilterPack_Noise_TV_3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Noise_TV_3__Class>(type_info, "", "ShaderID_CameraFilterPack_Noise_TV_3");
        }
        inline app::ShaderID_CameraFilterPack_Noise_TV_3* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Noise_TV_3>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Noise_TV_3
} // namespace app::classes::types
