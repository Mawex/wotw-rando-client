#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleDodgeRollBackBehaviourNew {
        namespace {
            inline app::TurtleDodgeRollBackBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::TurtleDodgeRollBackBehaviourNew__Class** type_info = &type_info_ref;
        inline app::TurtleDodgeRollBackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleDodgeRollBackBehaviourNew__Class>(type_info, "Moon", "TurtleDodgeRollBackBehaviourNew");
        }
        inline app::TurtleDodgeRollBackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleDodgeRollBackBehaviourNew>(get_class());
        }
    } // namespace TurtleDodgeRollBackBehaviourNew
} // namespace app::classes::types
