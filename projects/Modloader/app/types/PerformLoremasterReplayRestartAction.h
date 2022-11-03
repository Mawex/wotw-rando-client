#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerformLoremasterReplayRestartAction {
        namespace {
            inline app::PerformLoremasterReplayRestartAction__Class* type_info_ref = nullptr;
        }
        inline app::PerformLoremasterReplayRestartAction__Class** type_info = &type_info_ref;
        inline app::PerformLoremasterReplayRestartAction__Class* get_class() {
            return il2cpp::get_class<app::PerformLoremasterReplayRestartAction__Class>(type_info, "", "PerformLoremasterReplayRestartAction");
        }
        inline app::PerformLoremasterReplayRestartAction* create() {
            return il2cpp::create_object<app::PerformLoremasterReplayRestartAction>(get_class());
        }
    } // namespace PerformLoremasterReplayRestartAction
} // namespace app::classes::types
