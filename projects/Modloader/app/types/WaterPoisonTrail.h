#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterPoisonTrail {
        namespace {
            inline app::WaterPoisonTrail__Class* type_info_ref = nullptr;
        }
        inline app::WaterPoisonTrail__Class** type_info = &type_info_ref;
        inline app::WaterPoisonTrail__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonTrail__Class>(type_info, "", "WaterPoisonTrail");
        }
        inline app::WaterPoisonTrail* create() {
            return il2cpp::create_object<app::WaterPoisonTrail>(get_class());
        }
    } // namespace WaterPoisonTrail
} // namespace app::classes::types
