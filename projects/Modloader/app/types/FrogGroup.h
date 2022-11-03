#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrogGroup {
        namespace {
            inline app::FrogGroup__Class* type_info_ref = nullptr;
        }
        inline app::FrogGroup__Class** type_info = &type_info_ref;
        inline app::FrogGroup__Class* get_class() {
            return il2cpp::get_class<app::FrogGroup__Class>(type_info, "", "FrogGroup");
        }
        inline app::FrogGroup* create() {
            return il2cpp::create_object<app::FrogGroup>(get_class());
        }
    } // namespace FrogGroup
} // namespace app::classes::types
