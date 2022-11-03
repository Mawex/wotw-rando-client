#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonLong {
        namespace {
            inline app::MoonLong__Class* type_info_ref = nullptr;
        }
        inline app::MoonLong__Class** type_info = &type_info_ref;
        inline app::MoonLong__Class* get_class() {
            return il2cpp::get_class<app::MoonLong__Class>(type_info, "Moon", "MoonLong");
        }
        inline app::MoonLong* create() {
            return il2cpp::create_object<app::MoonLong>(get_class());
        }
    } // namespace MoonLong
} // namespace app::classes::types
