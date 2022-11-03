#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetSpheres_Sphere {
        namespace {
            inline app::TargetSpheres_Sphere__Class* type_info_ref = nullptr;
        }
        inline app::TargetSpheres_Sphere__Class** type_info = &type_info_ref;
        inline app::TargetSpheres_Sphere__Class* get_class() {
            return il2cpp::get_nested_class<app::TargetSpheres_Sphere__Class>(type_info, "", "TargetSpheres", "Sphere");
        }
        inline app::TargetSpheres_Sphere* create() {
            return il2cpp::create_object<app::TargetSpheres_Sphere>(get_class());
        }
        inline app::TargetSpheres_Sphere__Array* create_array(int size) {
            return il2cpp::array_new<app::TargetSpheres_Sphere__Array>(get_class(), size);
        }
        inline app::TargetSpheres_Sphere__Array* create_array(const std::vector<app::TargetSpheres_Sphere*>& items) {
            return il2cpp::array_new<app::TargetSpheres_Sphere__Array>(get_class(), items);
        }
    } // namespace TargetSpheres_Sphere
} // namespace app::classes::types
