#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPooled {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPooled__Class** type_info;
        inline app::IPooled__Class* get_class() {
            return il2cpp::get_class<app::IPooled__Class>(type_info, "", "IPooled");
        }
        inline app::IPooled* create() {
            return il2cpp::create_object<app::IPooled>(get_class());
        }
        inline app::IPooled__Array* create_array(int size) {
            return il2cpp::array_new<app::IPooled__Array>(get_class(), size);
        }
    } // namespace IPooled
} // namespace app::classes::types
