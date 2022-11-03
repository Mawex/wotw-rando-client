#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLightAffectorRadiusAnimator {
        namespace {
            inline app::SpiritLightAffectorRadiusAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLightAffectorRadiusAnimator__Class** type_info = &type_info_ref;
        inline app::SpiritLightAffectorRadiusAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightAffectorRadiusAnimator__Class>(type_info, "", "SpiritLightAffectorRadiusAnimator");
        }
        inline app::SpiritLightAffectorRadiusAnimator* create() {
            return il2cpp::create_object<app::SpiritLightAffectorRadiusAnimator>(get_class());
        }
    } // namespace SpiritLightAffectorRadiusAnimator
} // namespace app::classes::types
