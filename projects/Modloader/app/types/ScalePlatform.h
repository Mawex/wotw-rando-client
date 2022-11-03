#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScalePlatform {
        namespace {
            inline app::ScalePlatform__Class* type_info_ref = nullptr;
        }
        inline app::ScalePlatform__Class** type_info = &type_info_ref;
        inline app::ScalePlatform__Class* get_class() {
            return il2cpp::get_class<app::ScalePlatform__Class>(type_info, "Moon", "ScalePlatform");
        }
        inline app::ScalePlatform* create() {
            return il2cpp::create_object<app::ScalePlatform>(get_class());
        }
    } // namespace ScalePlatform
} // namespace app::classes::types
