#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskExtraModifier {
        namespace {
            inline app::MaskExtraModifier__Class* type_info_ref = nullptr;
        }
        inline app::MaskExtraModifier__Class** type_info = &type_info_ref;
        inline app::MaskExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::MaskExtraModifier__Class>(type_info, "", "MaskExtraModifier");
        }
        inline app::MaskExtraModifier* create() {
            return il2cpp::create_object<app::MaskExtraModifier>(get_class());
        }
    } // namespace MaskExtraModifier
} // namespace app::classes::types
