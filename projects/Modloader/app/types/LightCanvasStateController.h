#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCanvasStateController {
        namespace {
            inline app::LightCanvasStateController__Class* type_info_ref = nullptr;
        }
        inline app::LightCanvasStateController__Class** type_info = &type_info_ref;
        inline app::LightCanvasStateController__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasStateController__Class>(type_info, "", "LightCanvasStateController");
        }
        inline app::LightCanvasStateController* create() {
            return il2cpp::create_object<app::LightCanvasStateController>(get_class());
        }
    } // namespace LightCanvasStateController
} // namespace app::classes::types
