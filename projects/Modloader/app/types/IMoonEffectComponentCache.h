#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonEffectComponentCache {
        namespace {
            inline app::IMoonEffectComponentCache__Class* type_info_ref = nullptr;
        }
        inline app::IMoonEffectComponentCache__Class** type_info = &type_info_ref;
        inline app::IMoonEffectComponentCache__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectComponentCache__Class>(type_info, "Moon.EffectsFramework", "IMoonEffectComponentCache");
        }
    } // namespace IMoonEffectComponentCache
} // namespace app::classes::types
