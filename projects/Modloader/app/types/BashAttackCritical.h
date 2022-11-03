#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BashAttackCritical {
        namespace {
            inline app::BashAttackCritical__Class* type_info_ref = nullptr;
        }
        inline app::BashAttackCritical__Class** type_info = &type_info_ref;
        inline app::BashAttackCritical__Class* get_class() {
            return il2cpp::get_class<app::BashAttackCritical__Class>(type_info, "", "BashAttackCritical");
        }
        inline app::BashAttackCritical* create() {
            return il2cpp::create_object<app::BashAttackCritical>(get_class());
        }
    } // namespace BashAttackCritical
} // namespace app::classes::types
