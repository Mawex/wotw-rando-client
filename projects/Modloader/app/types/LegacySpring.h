#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySpring {
        namespace {
            inline app::LegacySpring__Class* type_info_ref = nullptr;
        }
        inline app::LegacySpring__Class** type_info = &type_info_ref;
        inline app::LegacySpring__Class* get_class() {
            return il2cpp::get_class<app::LegacySpring__Class>(type_info, "", "LegacySpring");
        }
        inline app::LegacySpring* create() {
            return il2cpp::create_object<app::LegacySpring>(get_class());
        }
    } // namespace LegacySpring
} // namespace app::classes::types
