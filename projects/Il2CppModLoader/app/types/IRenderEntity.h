#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRenderEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRenderEntity__Class** type_info;
        inline app::IRenderEntity__Class* get_class() {
            return il2cpp::get_class<app::IRenderEntity__Class>(type_info, "Moon.VisualDebug", "IRenderEntity");
        }
        inline app::IRenderEntity* create() {
            return il2cpp::create_object<app::IRenderEntity>(get_class());
        }
        inline app::IRenderEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::IRenderEntity__Array>(get_class(), size);
        }
    } // namespace IRenderEntity
} // namespace app::classes::types
