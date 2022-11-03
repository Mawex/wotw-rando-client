#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatSpawnTask {
        namespace {
            inline app::SpiderBatSpawnTask__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatSpawnTask__Class** type_info = &type_info_ref;
        inline app::SpiderBatSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatSpawnTask__Class>(type_info, "", "SpiderBatSpawnTask");
        }
        inline app::SpiderBatSpawnTask* create() {
            return il2cpp::create_object<app::SpiderBatSpawnTask>(get_class());
        }
    } // namespace SpiderBatSpawnTask
} // namespace app::classes::types
