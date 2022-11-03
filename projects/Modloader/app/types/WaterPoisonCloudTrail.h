#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterPoisonCloudTrail {
        namespace {
            inline app::WaterPoisonCloudTrail__Class* type_info_ref = nullptr;
        }
        inline app::WaterPoisonCloudTrail__Class** type_info = &type_info_ref;
        inline app::WaterPoisonCloudTrail__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonCloudTrail__Class>(type_info, "", "WaterPoisonCloudTrail");
        }
        inline app::WaterPoisonCloudTrail* create() {
            return il2cpp::create_object<app::WaterPoisonCloudTrail>(get_class());
        }
    } // namespace WaterPoisonCloudTrail
} // namespace app::classes::types
