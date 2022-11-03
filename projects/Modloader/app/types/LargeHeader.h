#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LargeHeader {
        namespace {
            inline app::LargeHeader__Class* type_info_ref = nullptr;
        }
        inline app::LargeHeader__Class** type_info = &type_info_ref;
        inline app::LargeHeader__Class* get_class() {
            return il2cpp::get_class<app::LargeHeader__Class>(type_info, "RootMotion", "LargeHeader");
        }
        inline app::LargeHeader* create() {
            return il2cpp::create_object<app::LargeHeader>(get_class());
        }
    } // namespace LargeHeader
} // namespace app::classes::types
