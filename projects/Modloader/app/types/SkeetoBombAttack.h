#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoBombAttack {
        namespace {
            inline app::SkeetoBombAttack__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoBombAttack__Class** type_info = &type_info_ref;
        inline app::SkeetoBombAttack__Class* get_class() {
            return il2cpp::get_class<app::SkeetoBombAttack__Class>(type_info, "", "SkeetoBombAttack");
        }
        inline app::SkeetoBombAttack* create() {
            return il2cpp::create_object<app::SkeetoBombAttack>(get_class());
        }
    } // namespace SkeetoBombAttack
} // namespace app::classes::types
