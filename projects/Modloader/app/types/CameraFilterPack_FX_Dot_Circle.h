#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Dot_Circle {
        inline app::CameraFilterPack_FX_Dot_Circle__Class** type_info = (app::CameraFilterPack_FX_Dot_Circle__Class**)(modloader::win::memory::resolve_rva(0x0476A338));
        inline app::CameraFilterPack_FX_Dot_Circle__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Dot_Circle__Class>(type_info, "", "CameraFilterPack_FX_Dot_Circle");
        }
        inline app::CameraFilterPack_FX_Dot_Circle* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Dot_Circle>(get_class());
        }
    } // namespace CameraFilterPack_FX_Dot_Circle
} // namespace app::classes::types
