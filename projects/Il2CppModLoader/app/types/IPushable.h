#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPushable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPushable__Class** type_info;
        inline app::IPushable__Class* get_class() {
            return il2cpp::get_class<app::IPushable__Class>(type_info, "", "IPushable");
        }
        inline app::IPushable* create() {
            return il2cpp::create_object<app::IPushable>(get_class());
        }
        inline app::IPushable__Array* create_array(int size) {
            return il2cpp::array_new<app::IPushable__Array>(get_class(), size);
        }
    } // namespace IPushable
} // namespace app::classes::types
