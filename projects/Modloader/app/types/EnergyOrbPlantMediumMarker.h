#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnergyOrbPlantMediumMarker {
        namespace {
            inline app::EnergyOrbPlantMediumMarker__Class* type_info_ref = nullptr;
        }
        inline app::EnergyOrbPlantMediumMarker__Class** type_info = &type_info_ref;
        inline app::EnergyOrbPlantMediumMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantMediumMarker__Class>(type_info, "", "EnergyOrbPlantMediumMarker");
        }
        inline app::EnergyOrbPlantMediumMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantMediumMarker>(get_class());
        }
    } // namespace EnergyOrbPlantMediumMarker
} // namespace app::classes::types
