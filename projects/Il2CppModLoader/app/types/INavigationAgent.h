#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INavigationAgent {
        namespace {
            app::INavigationAgent__Class* type_info_ref = nullptr;
        }
        app::INavigationAgent__Class** type_info = &type_info_ref;
        inline app::INavigationAgent__Class* get_class() {
            return il2cpp::get_class<app::INavigationAgent__Class>(type_info, "", "INavigationAgent");
        }
        inline app::INavigationAgent* create() {
            return il2cpp::create_object<app::INavigationAgent>(get_class());
        }
    } // namespace INavigationAgent
} // namespace app::classes::types
