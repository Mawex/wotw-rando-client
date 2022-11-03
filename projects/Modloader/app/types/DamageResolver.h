#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageResolver {
        namespace {
            inline app::DamageResolver__Class* type_info_ref = nullptr;
        }
        inline app::DamageResolver__Class** type_info = &type_info_ref;
        inline app::DamageResolver__Class* get_class() {
            return il2cpp::get_class<app::DamageResolver__Class>(type_info, "Moon", "DamageResolver");
        }
        inline app::DamageResolver* create() {
            return il2cpp::create_object<app::DamageResolver>(get_class());
        }
    } // namespace DamageResolver
} // namespace app::classes::types
