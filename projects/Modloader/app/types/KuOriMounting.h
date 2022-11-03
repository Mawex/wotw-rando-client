#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuOriMounting {
        namespace {
            inline app::KuOriMounting__Class* type_info_ref = nullptr;
        }
        inline app::KuOriMounting__Class** type_info = &type_info_ref;
        inline app::KuOriMounting__Class* get_class() {
            return il2cpp::get_class<app::KuOriMounting__Class>(type_info, "", "KuOriMounting");
        }
        inline app::KuOriMounting* create() {
            return il2cpp::create_object<app::KuOriMounting>(get_class());
        }
    } // namespace KuOriMounting
} // namespace app::classes::types
