#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundMoveInDirectionBehaviour {
        namespace {
            inline app::GroundMoveInDirectionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::GroundMoveInDirectionBehaviour__Class** type_info = &type_info_ref;
        inline app::GroundMoveInDirectionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundMoveInDirectionBehaviour__Class>(type_info, "Moon", "GroundMoveInDirectionBehaviour");
        }
        inline app::GroundMoveInDirectionBehaviour* create() {
            return il2cpp::create_object<app::GroundMoveInDirectionBehaviour>(get_class());
        }
    } // namespace GroundMoveInDirectionBehaviour
} // namespace app::classes::types
