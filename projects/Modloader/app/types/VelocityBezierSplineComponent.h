#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VelocityBezierSplineComponent {
        namespace {
            inline app::VelocityBezierSplineComponent__Class* type_info_ref = nullptr;
        }
        inline app::VelocityBezierSplineComponent__Class** type_info = &type_info_ref;
        inline app::VelocityBezierSplineComponent__Class* get_class() {
            return il2cpp::get_class<app::VelocityBezierSplineComponent__Class>(type_info, "", "VelocityBezierSplineComponent");
        }
        inline app::VelocityBezierSplineComponent* create() {
            return il2cpp::create_object<app::VelocityBezierSplineComponent>(get_class());
        }
    } // namespace VelocityBezierSplineComponent
} // namespace app::classes::types
