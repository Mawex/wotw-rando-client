#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenSpaceAmbientOcclusion {
        namespace {
            inline app::ScreenSpaceAmbientOcclusion__Class* type_info_ref = nullptr;
        }
        inline app::ScreenSpaceAmbientOcclusion__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceAmbientOcclusion__Class* get_class() {
            return il2cpp::get_class<app::ScreenSpaceAmbientOcclusion__Class>(type_info, "UnityStandardAssets.ImageEffects", "ScreenSpaceAmbientOcclusion");
        }
        inline app::ScreenSpaceAmbientOcclusion* create() {
            return il2cpp::create_object<app::ScreenSpaceAmbientOcclusion>(get_class());
        }
    } // namespace ScreenSpaceAmbientOcclusion
} // namespace app::classes::types
