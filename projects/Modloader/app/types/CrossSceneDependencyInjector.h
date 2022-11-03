#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossSceneDependencyInjector {
        namespace {
            inline app::CrossSceneDependencyInjector__Class* type_info_ref = nullptr;
        }
        inline app::CrossSceneDependencyInjector__Class** type_info = &type_info_ref;
        inline app::CrossSceneDependencyInjector__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyInjector__Class>(type_info, "Moon", "CrossSceneDependencyInjector");
        }
        inline app::CrossSceneDependencyInjector* create() {
            return il2cpp::create_object<app::CrossSceneDependencyInjector>(get_class());
        }
        inline app::CrossSceneDependencyInjector__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneDependencyInjector__Array>(get_class(), size);
        }
        inline app::CrossSceneDependencyInjector__Array* create_array(const std::vector<app::CrossSceneDependencyInjector*>& items) {
            return il2cpp::array_new<app::CrossSceneDependencyInjector__Array>(get_class(), items);
        }
    } // namespace CrossSceneDependencyInjector
} // namespace app::classes::types
