#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoftEdgeModifier {
        namespace {
            inline app::SoftEdgeModifier__Class* type_info_ref = nullptr;
        }
        inline app::SoftEdgeModifier__Class** type_info = &type_info_ref;
        inline app::SoftEdgeModifier__Class* get_class() {
            return il2cpp::get_class<app::SoftEdgeModifier__Class>(type_info, "", "SoftEdgeModifier");
        }
        inline app::SoftEdgeModifier* create() {
            return il2cpp::create_object<app::SoftEdgeModifier>(get_class());
        }
    } // namespace SoftEdgeModifier
} // namespace app::classes::types
