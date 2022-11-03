#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProfilingSettings {
        inline app::ProfilingSettings__Class** type_info = (app::ProfilingSettings__Class**)(modloader::win::memory::resolve_rva(0x0474A270));
        inline app::ProfilingSettings__Class* get_class() {
            return il2cpp::get_class<app::ProfilingSettings__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings");
        }
        inline app::ProfilingSettings* create() {
            return il2cpp::create_object<app::ProfilingSettings>(get_class());
        }
    } // namespace ProfilingSettings
} // namespace app::classes::types
