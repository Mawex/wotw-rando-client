#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicBrightnessSource {
        namespace {
            inline app::DynamicBrightnessSource__Class* type_info_ref = nullptr;
        }
        inline app::DynamicBrightnessSource__Class** type_info = &type_info_ref;
        inline app::DynamicBrightnessSource__Class* get_class() {
            return il2cpp::get_class<app::DynamicBrightnessSource__Class>(type_info, "", "DynamicBrightnessSource");
        }
        inline app::DynamicBrightnessSource* create() {
            return il2cpp::create_object<app::DynamicBrightnessSource>(get_class());
        }
    } // namespace DynamicBrightnessSource
} // namespace app::classes::types
