#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Paper2 {
        namespace {
            inline app::CameraFilterPack_Drawing_Paper2__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Drawing_Paper2__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Drawing_Paper2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Paper2__Class>(type_info, "", "CameraFilterPack_Drawing_Paper2");
        }
        inline app::CameraFilterPack_Drawing_Paper2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Paper2>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Paper2
} // namespace app::classes::types
