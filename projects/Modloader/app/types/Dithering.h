#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dithering {
        namespace {
            inline app::Dithering__Class* type_info_ref = nullptr;
        }
        inline app::Dithering__Class** type_info = &type_info_ref;
        inline app::Dithering__Class* get_class() {
            return il2cpp::get_class<app::Dithering__Class>(type_info, "Colorful", "Dithering");
        }
        inline app::Dithering* create() {
            return il2cpp::create_object<app::Dithering>(get_class());
        }
    } // namespace Dithering
} // namespace app::classes::types
