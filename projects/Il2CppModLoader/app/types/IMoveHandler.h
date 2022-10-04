#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoveHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoveHandler__Class** type_info;
        inline app::IMoveHandler__Class* get_class() {
            return il2cpp::get_class<app::IMoveHandler__Class>(type_info, "UnityEngine.EventSystems", "IMoveHandler");
        }
        inline app::IMoveHandler* create() {
            return il2cpp::create_object<app::IMoveHandler>(get_class());
        }
    } // namespace IMoveHandler
} // namespace app::classes::types
