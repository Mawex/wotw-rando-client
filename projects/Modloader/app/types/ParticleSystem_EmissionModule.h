#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystem_EmissionModule {
        namespace {
            inline app::ParticleSystem_EmissionModule__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystem_EmissionModule__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_EmissionModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_EmissionModule__Class>(type_info, "UnityEngine", "ParticleSystem", "EmissionModule");
        }
        inline app::ParticleSystem_EmissionModule* create() {
            return il2cpp::create_object<app::ParticleSystem_EmissionModule>(get_class());
        }
        inline app::ParticleSystem_EmissionModule__Boxed* box(app::ParticleSystem_EmissionModule value) {
            return il2cpp::box_value<app::ParticleSystem_EmissionModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_EmissionModule
} // namespace app::classes::types
