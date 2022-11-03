#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CaveSleepController {
        namespace {
            inline app::CaveSleepController__Class* type_info_ref = nullptr;
        }
        inline app::CaveSleepController__Class** type_info = &type_info_ref;
        inline app::CaveSleepController__Class* get_class() {
            return il2cpp::get_class<app::CaveSleepController__Class>(type_info, "", "CaveSleepController");
        }
        inline app::CaveSleepController* create() {
            return il2cpp::create_object<app::CaveSleepController>(get_class());
        }
    } // namespace CaveSleepController
} // namespace app::classes::types
