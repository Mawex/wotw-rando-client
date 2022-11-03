#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberSwarmPOI {
        namespace {
            inline app::UberSwarmPOI__Class* type_info_ref = nullptr;
        }
        inline app::UberSwarmPOI__Class** type_info = &type_info_ref;
        inline app::UberSwarmPOI__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmPOI__Class>(type_info, "", "UberSwarmPOI");
        }
        inline app::UberSwarmPOI* create() {
            return il2cpp::create_object<app::UberSwarmPOI>(get_class());
        }
        inline app::UberSwarmPOI__Array* create_array(int size) {
            return il2cpp::array_new<app::UberSwarmPOI__Array>(get_class(), size);
        }
        inline app::UberSwarmPOI__Array* create_array(const std::vector<app::UberSwarmPOI*>& items) {
            return il2cpp::array_new<app::UberSwarmPOI__Array>(get_class(), items);
        }
    } // namespace UberSwarmPOI
} // namespace app::classes::types
