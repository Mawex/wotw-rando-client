#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISenseInteractable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISenseInteractable__Class** type_info;
        inline app::ISenseInteractable__Class* get_class() {
            return il2cpp::get_class<app::ISenseInteractable__Class>(type_info, "", "ISenseInteractable");
        }
        inline app::ISenseInteractable* create() {
            return il2cpp::create_object<app::ISenseInteractable>(get_class());
        }
        inline app::ISenseInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::ISenseInteractable__Array>(get_class(), size);
        }
    } // namespace ISenseInteractable
} // namespace app::classes::types
