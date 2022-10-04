#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRevertMoonEffectLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRevertMoonEffectLogic__Class** type_info;
        inline app::IRevertMoonEffectLogic__Class* get_class() {
            return il2cpp::get_class<app::IRevertMoonEffectLogic__Class>(type_info, "Moon.EffectsFramework", "IRevertMoonEffectLogic");
        }
        inline app::IRevertMoonEffectLogic* create() {
            return il2cpp::create_object<app::IRevertMoonEffectLogic>(get_class());
        }
        inline app::IRevertMoonEffectLogic__Array* create_array(int size) {
            return il2cpp::array_new<app::IRevertMoonEffectLogic__Array>(get_class(), size);
        }
    } // namespace IRevertMoonEffectLogic
} // namespace app::classes::types
