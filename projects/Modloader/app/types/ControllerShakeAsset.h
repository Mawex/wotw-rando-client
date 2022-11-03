#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerShakeAsset {
        namespace {
            inline app::ControllerShakeAsset__Class* type_info_ref = nullptr;
        }
        inline app::ControllerShakeAsset__Class** type_info = &type_info_ref;
        inline app::ControllerShakeAsset__Class* get_class() {
            return il2cpp::get_class<app::ControllerShakeAsset__Class>(type_info, "", "ControllerShakeAsset");
        }
        inline app::ControllerShakeAsset* create() {
            return il2cpp::create_object<app::ControllerShakeAsset>(get_class());
        }
    } // namespace ControllerShakeAsset
} // namespace app::classes::types
