#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecalLayerModifier {
        namespace {
            inline app::DecalLayerModifier__Class* type_info_ref = nullptr;
        }
        inline app::DecalLayerModifier__Class** type_info = &type_info_ref;
        inline app::DecalLayerModifier__Class* get_class() {
            return il2cpp::get_class<app::DecalLayerModifier__Class>(type_info, "", "DecalLayerModifier");
        }
        inline app::DecalLayerModifier* create() {
            return il2cpp::create_object<app::DecalLayerModifier>(get_class());
        }
    } // namespace DecalLayerModifier
} // namespace app::classes::types
