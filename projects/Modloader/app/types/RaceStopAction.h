#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceStopAction {
        namespace {
            inline app::RaceStopAction__Class* type_info_ref = nullptr;
        }
        inline app::RaceStopAction__Class** type_info = &type_info_ref;
        inline app::RaceStopAction__Class* get_class() {
            return il2cpp::get_class<app::RaceStopAction__Class>(type_info, "Moon.Race", "RaceStopAction");
        }
        inline app::RaceStopAction* create() {
            return il2cpp::create_object<app::RaceStopAction>(get_class());
        }
    } // namespace RaceStopAction
} // namespace app::classes::types
