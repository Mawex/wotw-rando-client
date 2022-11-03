#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReactionTrigger {
        namespace {
            inline app::HitReactionTrigger__Class* type_info_ref = nullptr;
        }
        inline app::HitReactionTrigger__Class** type_info = &type_info_ref;
        inline app::HitReactionTrigger__Class* get_class() {
            return il2cpp::get_class<app::HitReactionTrigger__Class>(type_info, "RootMotion.Demos", "HitReactionTrigger");
        }
        inline app::HitReactionTrigger* create() {
            return il2cpp::create_object<app::HitReactionTrigger>(get_class());
        }
    } // namespace HitReactionTrigger
} // namespace app::classes::types
