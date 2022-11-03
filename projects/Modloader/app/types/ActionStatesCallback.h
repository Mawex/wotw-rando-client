#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionStatesCallback {
        namespace {
            inline app::ActionStatesCallback__Class* type_info_ref = nullptr;
        }
        inline app::ActionStatesCallback__Class** type_info = &type_info_ref;
        inline app::ActionStatesCallback__Class* get_class() {
            return il2cpp::get_class<app::ActionStatesCallback__Class>(type_info, "", "ActionStatesCallback");
        }
        inline app::ActionStatesCallback* create() {
            return il2cpp::create_object<app::ActionStatesCallback>(get_class());
        }
    } // namespace ActionStatesCallback
} // namespace app::classes::types
