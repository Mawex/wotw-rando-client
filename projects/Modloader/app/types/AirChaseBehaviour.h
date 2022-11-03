#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AirChaseBehaviour {
        namespace {
            inline app::AirChaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::AirChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::AirChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AirChaseBehaviour__Class>(type_info, "Moon", "AirChaseBehaviour");
        }
        inline app::AirChaseBehaviour* create() {
            return il2cpp::create_object<app::AirChaseBehaviour>(get_class());
        }
    } // namespace AirChaseBehaviour
} // namespace app::classes::types
