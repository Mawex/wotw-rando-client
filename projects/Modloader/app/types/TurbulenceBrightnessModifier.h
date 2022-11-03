#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceBrightnessModifier {
        namespace {
            inline app::TurbulenceBrightnessModifier__Class* type_info_ref = nullptr;
        }
        inline app::TurbulenceBrightnessModifier__Class** type_info = &type_info_ref;
        inline app::TurbulenceBrightnessModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceBrightnessModifier__Class>(type_info, "", "TurbulenceBrightnessModifier");
        }
        inline app::TurbulenceBrightnessModifier* create() {
            return il2cpp::create_object<app::TurbulenceBrightnessModifier>(get_class());
        }
    } // namespace TurbulenceBrightnessModifier
} // namespace app::classes::types
