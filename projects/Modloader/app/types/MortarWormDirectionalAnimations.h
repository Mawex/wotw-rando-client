#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormDirectionalAnimations {
        namespace {
            inline app::MortarWormDirectionalAnimations__Class* type_info_ref = nullptr;
        }
        inline app::MortarWormDirectionalAnimations__Class** type_info = &type_info_ref;
        inline app::MortarWormDirectionalAnimations__Class* get_class() {
            return il2cpp::get_class<app::MortarWormDirectionalAnimations__Class>(type_info, "", "MortarWormDirectionalAnimations");
        }
        inline app::MortarWormDirectionalAnimations* create() {
            return il2cpp::create_object<app::MortarWormDirectionalAnimations>(get_class());
        }
    } // namespace MortarWormDirectionalAnimations
} // namespace app::classes::types
