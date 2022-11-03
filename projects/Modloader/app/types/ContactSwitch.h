#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContactSwitch {
        namespace {
            inline app::ContactSwitch__Class* type_info_ref = nullptr;
        }
        inline app::ContactSwitch__Class** type_info = &type_info_ref;
        inline app::ContactSwitch__Class* get_class() {
            return il2cpp::get_class<app::ContactSwitch__Class>(type_info, "", "ContactSwitch");
        }
        inline app::ContactSwitch* create() {
            return il2cpp::create_object<app::ContactSwitch>(get_class());
        }
        inline app::ContactSwitch__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactSwitch__Array>(get_class(), size);
        }
        inline app::ContactSwitch__Array* create_array(const std::vector<app::ContactSwitch*>& items) {
            return il2cpp::array_new<app::ContactSwitch__Array>(get_class(), items);
        }
    } // namespace ContactSwitch
} // namespace app::classes::types
