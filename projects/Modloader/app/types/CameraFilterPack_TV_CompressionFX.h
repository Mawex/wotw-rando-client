#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_CompressionFX {
        namespace {
            inline app::CameraFilterPack_TV_CompressionFX__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_TV_CompressionFX__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_CompressionFX__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_CompressionFX__Class>(type_info, "", "CameraFilterPack_TV_CompressionFX");
        }
        inline app::CameraFilterPack_TV_CompressionFX* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_CompressionFX>(get_class());
        }
    } // namespace CameraFilterPack_TV_CompressionFX
} // namespace app::classes::types
