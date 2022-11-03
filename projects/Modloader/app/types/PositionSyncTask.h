#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionSyncTask {
        inline app::PositionSyncTask__Class** type_info = (app::PositionSyncTask__Class**)(modloader::win::memory::resolve_rva(0x04771A48));
        inline app::PositionSyncTask__Class* get_class() {
            return il2cpp::get_class<app::PositionSyncTask__Class>(type_info, "Moon.Wwise", "PositionSyncTask");
        }
        inline app::PositionSyncTask* create() {
            return il2cpp::create_object<app::PositionSyncTask>(get_class());
        }
        inline app::PositionSyncTask__Array* create_array(int size) {
            return il2cpp::array_new<app::PositionSyncTask__Array>(get_class(), size);
        }
        inline app::PositionSyncTask__Array* create_array(const std::vector<app::PositionSyncTask*>& items) {
            return il2cpp::array_new<app::PositionSyncTask__Array>(get_class(), items);
        }
    } // namespace PositionSyncTask
} // namespace app::classes::types
