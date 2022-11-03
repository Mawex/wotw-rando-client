#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rock {
        namespace {
            inline app::Rock__Class* type_info_ref = nullptr;
        }
        inline app::Rock__Class** type_info = &type_info_ref;
        inline app::Rock__Class* get_class() {
            return il2cpp::get_class<app::Rock__Class>(type_info, "", "Rock");
        }
        inline app::Rock* create() {
            return il2cpp::create_object<app::Rock>(get_class());
        }
    } // namespace Rock
} // namespace app::classes::types
