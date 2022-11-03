#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEffectFlags {
        inline app::VolumeEffectFlags__Class** type_info = (app::VolumeEffectFlags__Class**)(modloader::win::memory::resolve_rva(0x04760740));
        inline app::VolumeEffectFlags__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectFlags__Class>(type_info, "AmplifyColor", "VolumeEffectFlags");
        }
        inline app::VolumeEffectFlags* create() {
            return il2cpp::create_object<app::VolumeEffectFlags>(get_class());
        }
    } // namespace VolumeEffectFlags
} // namespace app::classes::types
