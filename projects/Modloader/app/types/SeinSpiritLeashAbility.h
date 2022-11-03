#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritLeashAbility {
        inline app::SeinSpiritLeashAbility__Class** type_info = (app::SeinSpiritLeashAbility__Class**)(modloader::win::memory::resolve_rva(0x04797FD8));
        inline app::SeinSpiritLeashAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritLeashAbility__Class>(type_info, "", "SeinSpiritLeashAbility");
        }
        inline app::SeinSpiritLeashAbility* create() {
            return il2cpp::create_object<app::SeinSpiritLeashAbility>(get_class());
        }
    } // namespace SeinSpiritLeashAbility
} // namespace app::classes::types
