#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemExtensionsImpl {
        namespace {
            inline app::ParticleSystemExtensionsImpl__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemExtensionsImpl__Class** type_info = &type_info_ref;
        inline app::ParticleSystemExtensionsImpl__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemExtensionsImpl__Class>(type_info, "UnityEngine", "ParticleSystemExtensionsImpl");
        }
        inline app::ParticleSystemExtensionsImpl* create() {
            return il2cpp::create_object<app::ParticleSystemExtensionsImpl>(get_class());
        }
    } // namespace ParticleSystemExtensionsImpl
} // namespace app::classes::types
