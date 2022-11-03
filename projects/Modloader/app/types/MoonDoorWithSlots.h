#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonDoorWithSlots {
        namespace {
            inline app::MoonDoorWithSlots__Class* type_info_ref = nullptr;
        }
        inline app::MoonDoorWithSlots__Class** type_info = &type_info_ref;
        inline app::MoonDoorWithSlots__Class* get_class() {
            return il2cpp::get_class<app::MoonDoorWithSlots__Class>(type_info, "", "MoonDoorWithSlots");
        }
        inline app::MoonDoorWithSlots* create() {
            return il2cpp::create_object<app::MoonDoorWithSlots>(get_class());
        }
    } // namespace MoonDoorWithSlots
} // namespace app::classes::types
