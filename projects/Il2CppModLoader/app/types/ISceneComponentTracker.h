#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISceneComponentTracker {
        namespace {
            app::ISceneComponentTracker__Class* type_info_ref = nullptr;
        }
        app::ISceneComponentTracker__Class** type_info = &type_info_ref;
        inline app::ISceneComponentTracker__Class* get_class() {
            return il2cpp::get_class<app::ISceneComponentTracker__Class>(type_info, "", "ISceneComponentTracker");
        }
        inline app::ISceneComponentTracker* create() {
            return il2cpp::create_object<app::ISceneComponentTracker>(get_class());
        }
        inline app::ISceneComponentTracker__Array* create_array(int size) {
            return il2cpp::array_new<app::ISceneComponentTracker__Array>(get_class(), size);
        }
    } // namespace ISceneComponentTracker
} // namespace app::classes::types
