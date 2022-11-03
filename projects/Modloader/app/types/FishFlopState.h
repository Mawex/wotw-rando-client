#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishFlopState {
        inline app::FishFlopState__Class** type_info = (app::FishFlopState__Class**)(modloader::win::memory::resolve_rva(0x04706100));
        inline app::FishFlopState__Class* get_class() {
            return il2cpp::get_class<app::FishFlopState__Class>(type_info, "", "FishFlopState");
        }
        inline app::FishFlopState* create() {
            return il2cpp::create_object<app::FishFlopState>(get_class());
        }
    } // namespace FishFlopState
} // namespace app::classes::types
