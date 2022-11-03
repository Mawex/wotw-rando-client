#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaypoint_Connection {
        namespace {
            inline app::LaserShooterMinibossWaypoint_Connection__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossWaypoint_Connection__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossWaypoint_Connection__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterMinibossWaypoint_Connection__Class>(type_info, "", "LaserShooterMinibossWaypoint", "Connection");
        }
        inline app::LaserShooterMinibossWaypoint_Connection* create() {
            return il2cpp::create_object<app::LaserShooterMinibossWaypoint_Connection>(get_class());
        }
    } // namespace LaserShooterMinibossWaypoint_Connection
} // namespace app::classes::types
