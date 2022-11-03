#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraTarget_TargetLayer {
        inline app::CameraTarget_TargetLayer__Class** type_info = (app::CameraTarget_TargetLayer__Class**)(modloader::win::memory::resolve_rva(0x04706738));
        inline app::CameraTarget_TargetLayer__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraTarget_TargetLayer__Class>(type_info, "", "CameraTarget", "TargetLayer");
        }
        inline app::CameraTarget_TargetLayer* create() {
            return il2cpp::create_object<app::CameraTarget_TargetLayer>(get_class());
        }
        inline app::CameraTarget_TargetLayer__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraTarget_TargetLayer__Array>(get_class(), size);
        }
        inline app::CameraTarget_TargetLayer__Array* create_array(const std::vector<app::CameraTarget_TargetLayer*>& items) {
            return il2cpp::array_new<app::CameraTarget_TargetLayer__Array>(get_class(), items);
        }
    } // namespace CameraTarget_TargetLayer
} // namespace app::classes::types
