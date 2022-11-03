#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShieldCircleSetting {
        namespace {
            inline app::LaserShieldCircleSetting__Class* type_info_ref = nullptr;
        }
        inline app::LaserShieldCircleSetting__Class** type_info = &type_info_ref;
        inline app::LaserShieldCircleSetting__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldCircleSetting__Class>(type_info, "", "LaserShieldCircleSetting");
        }
        inline app::LaserShieldCircleSetting* create() {
            return il2cpp::create_object<app::LaserShieldCircleSetting>(get_class());
        }
    } // namespace LaserShieldCircleSetting
} // namespace app::classes::types
