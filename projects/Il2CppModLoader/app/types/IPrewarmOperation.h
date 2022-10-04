#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPrewarmOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPrewarmOperation__Class** type_info;
        inline app::IPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::IPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "IPrewarmOperation");
        }
        inline app::IPrewarmOperation* create() {
            return il2cpp::create_object<app::IPrewarmOperation>(get_class());
        }
        inline app::IPrewarmOperation__Array* create_array(int size) {
            return il2cpp::array_new<app::IPrewarmOperation__Array>(get_class(), size);
        }
    } // namespace IPrewarmOperation
} // namespace app::classes::types
