#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnergyOrbPlantMarker {
        namespace {
            inline app::EnergyOrbPlantMarker__Class* type_info_ref = nullptr;
        }
        inline app::EnergyOrbPlantMarker__Class** type_info = &type_info_ref;
        inline app::EnergyOrbPlantMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantMarker__Class>(type_info, "", "EnergyOrbPlantMarker");
        }
        inline app::EnergyOrbPlantMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantMarker>(get_class());
        }
    } // namespace EnergyOrbPlantMarker
} // namespace app::classes::types
