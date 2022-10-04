#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFlameHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFlameHandler__Class** type_info;
        inline app::IFlameHandler__Class* get_class() {
            return il2cpp::get_class<app::IFlameHandler__Class>(type_info, "Moon", "IFlameHandler");
        }
        inline app::IFlameHandler* create() {
            return il2cpp::create_object<app::IFlameHandler>(get_class());
        }
    } // namespace IFlameHandler
} // namespace app::classes::types
