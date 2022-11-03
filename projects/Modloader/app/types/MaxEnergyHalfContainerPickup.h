#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaxEnergyHalfContainerPickup {
        inline app::MaxEnergyHalfContainerPickup__Class** type_info = (app::MaxEnergyHalfContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04792780));
        inline app::MaxEnergyHalfContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxEnergyHalfContainerPickup__Class>(type_info, "", "MaxEnergyHalfContainerPickup");
        }
        inline app::MaxEnergyHalfContainerPickup* create() {
            return il2cpp::create_object<app::MaxEnergyHalfContainerPickup>(get_class());
        }
    } // namespace MaxEnergyHalfContainerPickup
} // namespace app::classes::types
