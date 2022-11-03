#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovementProcessor {
        namespace {
            inline app::MovementProcessor__Class* type_info_ref = nullptr;
        }
        inline app::MovementProcessor__Class** type_info = &type_info_ref;
        inline app::MovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::MovementProcessor__Class>(type_info, "Moon", "MovementProcessor");
        }
        inline app::MovementProcessor* create() {
            return il2cpp::create_object<app::MovementProcessor>(get_class());
        }
    } // namespace MovementProcessor
} // namespace app::classes::types
