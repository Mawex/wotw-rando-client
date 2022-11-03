#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IK1JointAnalytic {
        namespace {
            inline app::IK1JointAnalytic__Class* type_info_ref = nullptr;
        }
        inline app::IK1JointAnalytic__Class** type_info = &type_info_ref;
        inline app::IK1JointAnalytic__Class* get_class() {
            return il2cpp::get_class<app::IK1JointAnalytic__Class>(type_info, "", "IK1JointAnalytic");
        }
        inline app::IK1JointAnalytic* create() {
            return il2cpp::create_object<app::IK1JointAnalytic>(get_class());
        }
    } // namespace IK1JointAnalytic
} // namespace app::classes::types
