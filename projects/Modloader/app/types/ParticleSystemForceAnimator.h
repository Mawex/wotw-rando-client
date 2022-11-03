#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemForceAnimator {
        namespace {
            inline app::ParticleSystemForceAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemForceAnimator__Class** type_info = &type_info_ref;
        inline app::ParticleSystemForceAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemForceAnimator__Class>(type_info, "", "ParticleSystemForceAnimator");
        }
        inline app::ParticleSystemForceAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemForceAnimator>(get_class());
        }
    } // namespace ParticleSystemForceAnimator
} // namespace app::classes::types
