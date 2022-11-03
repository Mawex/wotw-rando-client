#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceMenuScreenUISlot {
        inline app::RaceMenuScreenUISlot__Class** type_info = (app::RaceMenuScreenUISlot__Class**)(modloader::win::memory::resolve_rva(0x0477BAA8));
        inline app::RaceMenuScreenUISlot__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenUISlot__Class>(type_info, "", "RaceMenuScreenUISlot");
        }
        inline app::RaceMenuScreenUISlot* create() {
            return il2cpp::create_object<app::RaceMenuScreenUISlot>(get_class());
        }
    } // namespace RaceMenuScreenUISlot
} // namespace app::classes::types
