#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection_RadialItemVisual {
        inline app::EquipmentRadialSelection_RadialItemVisual__Class** type_info = (app::EquipmentRadialSelection_RadialItemVisual__Class**)(modloader::win::memory::resolve_rva(0x0475D278));
        inline app::EquipmentRadialSelection_RadialItemVisual__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentRadialSelection_RadialItemVisual__Class>(type_info, "", "EquipmentRadialSelection", "RadialItemVisual");
        }
        inline app::EquipmentRadialSelection_RadialItemVisual* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection_RadialItemVisual>(get_class());
        }
        inline app::EquipmentRadialSelection_RadialItemVisual__Array* create_array(int size) {
            return il2cpp::array_new<app::EquipmentRadialSelection_RadialItemVisual__Array>(get_class(), size);
        }
        inline app::EquipmentRadialSelection_RadialItemVisual__Array* create_array(const std::vector<app::EquipmentRadialSelection_RadialItemVisual*>& items) {
            return il2cpp::array_new<app::EquipmentRadialSelection_RadialItemVisual__Array>(get_class(), items);
        }
    } // namespace EquipmentRadialSelection_RadialItemVisual
} // namespace app::classes::types
