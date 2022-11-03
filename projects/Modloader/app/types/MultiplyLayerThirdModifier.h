#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplyLayerThirdModifier {
        namespace {
            inline app::MultiplyLayerThirdModifier__Class* type_info_ref = nullptr;
        }
        inline app::MultiplyLayerThirdModifier__Class** type_info = &type_info_ref;
        inline app::MultiplyLayerThirdModifier__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerThirdModifier__Class>(type_info, "", "MultiplyLayerThirdModifier");
        }
        inline app::MultiplyLayerThirdModifier* create() {
            return il2cpp::create_object<app::MultiplyLayerThirdModifier>(get_class());
        }
    } // namespace MultiplyLayerThirdModifier
} // namespace app::classes::types
