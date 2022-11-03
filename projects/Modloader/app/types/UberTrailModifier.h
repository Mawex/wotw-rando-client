#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberTrailModifier {
        namespace {
            inline app::UberTrailModifier__Class* type_info_ref = nullptr;
        }
        inline app::UberTrailModifier__Class** type_info = &type_info_ref;
        inline app::UberTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::UberTrailModifier__Class>(type_info, "", "UberTrailModifier");
        }
        inline app::UberTrailModifier* create() {
            return il2cpp::create_object<app::UberTrailModifier>(get_class());
        }
    } // namespace UberTrailModifier
} // namespace app::classes::types
