#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseLocomotionTurningBehaviour {
        namespace {
            inline app::BaseLocomotionTurningBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::BaseLocomotionTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::BaseLocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BaseLocomotionTurningBehaviour__Class>(type_info, "", "BaseLocomotionTurningBehaviour");
        }
        inline app::BaseLocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::BaseLocomotionTurningBehaviour>(get_class());
        }
    } // namespace BaseLocomotionTurningBehaviour
} // namespace app::classes::types
