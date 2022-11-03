#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpawnTextBoxes {
        namespace {
            inline app::SpawnTextBoxes__Class* type_info_ref = nullptr;
        }
        inline app::SpawnTextBoxes__Class** type_info = &type_info_ref;
        inline app::SpawnTextBoxes__Class* get_class() {
            return il2cpp::get_class<app::SpawnTextBoxes__Class>(type_info, "", "SpawnTextBoxes");
        }
        inline app::SpawnTextBoxes* create() {
            return il2cpp::create_object<app::SpawnTextBoxes>(get_class());
        }
    } // namespace SpawnTextBoxes
} // namespace app::classes::types
