#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld {
        namespace {
            inline app::HitReactionBehaviourOld__Class* type_info_ref = nullptr;
        }
        inline app::HitReactionBehaviourOld__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviourOld__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviourOld__Class>(type_info, "Moon", "HitReactionBehaviourOld");
        }
        inline app::HitReactionBehaviourOld* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld>(get_class());
        }
    } // namespace HitReactionBehaviourOld
} // namespace app::classes::types
