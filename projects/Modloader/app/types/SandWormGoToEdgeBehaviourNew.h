#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormGoToEdgeBehaviourNew {
        namespace {
            inline app::SandWormGoToEdgeBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::SandWormGoToEdgeBehaviourNew__Class** type_info = &type_info_ref;
        inline app::SandWormGoToEdgeBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormGoToEdgeBehaviourNew__Class>(type_info, "Moon", "SandWormGoToEdgeBehaviourNew");
        }
        inline app::SandWormGoToEdgeBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormGoToEdgeBehaviourNew>(get_class());
        }
    } // namespace SandWormGoToEdgeBehaviourNew
} // namespace app::classes::types
