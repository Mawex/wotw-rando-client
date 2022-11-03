#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMaxEnergyNormalizedValueProvider {
        namespace {
            inline app::SeinMaxEnergyNormalizedValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinMaxEnergyNormalizedValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinMaxEnergyNormalizedValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxEnergyNormalizedValueProvider__Class>(type_info, "", "SeinMaxEnergyNormalizedValueProvider");
        }
        inline app::SeinMaxEnergyNormalizedValueProvider* create() {
            return il2cpp::create_object<app::SeinMaxEnergyNormalizedValueProvider>(get_class());
        }
    } // namespace SeinMaxEnergyNormalizedValueProvider
} // namespace app::classes::types
