#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedUpdateScheduler_ScheduledAction {
        inline app::FixedUpdateScheduler_ScheduledAction__Class** type_info = (app::FixedUpdateScheduler_ScheduledAction__Class**)(modloader::win::memory::resolve_rva(0x04778558));
        inline app::FixedUpdateScheduler_ScheduledAction__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdateScheduler_ScheduledAction__Class>(type_info, "", "FixedUpdateScheduler", "ScheduledAction");
        }
        inline app::FixedUpdateScheduler_ScheduledAction* create() {
            return il2cpp::create_object<app::FixedUpdateScheduler_ScheduledAction>(get_class());
        }
        inline app::FixedUpdateScheduler_ScheduledAction__Array* create_array(int size) {
            return il2cpp::array_new<app::FixedUpdateScheduler_ScheduledAction__Array>(get_class(), size);
        }
        inline app::FixedUpdateScheduler_ScheduledAction__Array* create_array(const std::vector<app::FixedUpdateScheduler_ScheduledAction*>& items) {
            return il2cpp::array_new<app::FixedUpdateScheduler_ScheduledAction__Array>(get_class(), items);
        }
    } // namespace FixedUpdateScheduler_ScheduledAction
} // namespace app::classes::types
