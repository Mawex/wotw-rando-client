#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttackableSwitchSetupData {
        namespace {
            inline app::AttackableSwitchSetupData__Class* type_info_ref = nullptr;
        }
        inline app::AttackableSwitchSetupData__Class** type_info = &type_info_ref;
        inline app::AttackableSwitchSetupData__Class* get_class() {
            return il2cpp::get_class<app::AttackableSwitchSetupData__Class>(type_info, "", "AttackableSwitchSetupData");
        }
        inline app::AttackableSwitchSetupData* create() {
            return il2cpp::create_object<app::AttackableSwitchSetupData>(get_class());
        }
        inline app::AttackableSwitchSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::AttackableSwitchSetupData__Array>(get_class(), size);
        }
        inline app::AttackableSwitchSetupData__Array* create_array(const std::vector<app::AttackableSwitchSetupData*>& items) {
            return il2cpp::array_new<app::AttackableSwitchSetupData__Array>(get_class(), items);
        }
    } // namespace AttackableSwitchSetupData
} // namespace app::classes::types
