#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInterruptState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInterruptState__Class** type_info;
        inline app::IInterruptState__Class* get_class() {
            return il2cpp::get_class<app::IInterruptState__Class>(type_info, "Moon.FSM", "IInterruptState");
        }
        inline app::IInterruptState* create() {
            return il2cpp::create_object<app::IInterruptState>(get_class());
        }
        inline app::IInterruptState__Array* create_array(int size) {
            return il2cpp::array_new<app::IInterruptState__Array>(get_class(), size);
        }
    } // namespace IInterruptState
} // namespace app::classes::types
