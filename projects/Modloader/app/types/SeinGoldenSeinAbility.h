#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGoldenSeinAbility {
        namespace {
            inline app::SeinGoldenSeinAbility__Class* type_info_ref = nullptr;
        }
        inline app::SeinGoldenSeinAbility__Class** type_info = &type_info_ref;
        inline app::SeinGoldenSeinAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinGoldenSeinAbility__Class>(type_info, "", "SeinGoldenSeinAbility");
        }
        inline app::SeinGoldenSeinAbility* create() {
            return il2cpp::create_object<app::SeinGoldenSeinAbility>(get_class());
        }
    } // namespace SeinGoldenSeinAbility
} // namespace app::classes::types
