#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChaseBehaviourNew {
        namespace {
            inline app::ChaseBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::ChaseBehaviourNew__Class** type_info = &type_info_ref;
        inline app::ChaseBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::ChaseBehaviourNew__Class>(type_info, "Moon", "ChaseBehaviourNew");
        }
        inline app::ChaseBehaviourNew* create() {
            return il2cpp::create_object<app::ChaseBehaviourNew>(get_class());
        }
    } // namespace ChaseBehaviourNew
} // namespace app::classes::types
