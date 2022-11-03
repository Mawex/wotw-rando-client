#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputDigitalActionHandle_t {
        inline app::InputDigitalActionHandle_t__Class** type_info = (app::InputDigitalActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0473E768));
        inline app::InputDigitalActionHandle_t__Class* get_class() {
            return il2cpp::get_class<app::InputDigitalActionHandle_t__Class>(type_info, "Steamworks", "InputDigitalActionHandle_t");
        }
        inline app::InputDigitalActionHandle_t* create() {
            return il2cpp::create_object<app::InputDigitalActionHandle_t>(get_class());
        }
        inline app::InputDigitalActionHandle_t__Boxed* box(app::InputDigitalActionHandle_t value) {
            return il2cpp::box_value<app::InputDigitalActionHandle_t__Boxed>(get_class(), value);
        }
    } // namespace InputDigitalActionHandle_t
} // namespace app::classes::types
