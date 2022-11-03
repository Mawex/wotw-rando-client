#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryNewDeserializationProfilingSetting {
        namespace {
            inline app::TelemetryNewDeserializationProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::TelemetryNewDeserializationProfilingSetting__Class** type_info = &type_info_ref;
        inline app::TelemetryNewDeserializationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TelemetryNewDeserializationProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "TelemetryNewDeserializationProfilingSetting");
        }
        inline app::TelemetryNewDeserializationProfilingSetting* create() {
            return il2cpp::create_object<app::TelemetryNewDeserializationProfilingSetting>(get_class());
        }
    } // namespace TelemetryNewDeserializationProfilingSetting
} // namespace app::classes::types
