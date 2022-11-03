#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerByString_StringTriggerData {
        namespace {
            inline app::TriggerByString_StringTriggerData__Class* type_info_ref = nullptr;
        }
        inline app::TriggerByString_StringTriggerData__Class** type_info = &type_info_ref;
        inline app::TriggerByString_StringTriggerData__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerByString_StringTriggerData__Class>(type_info, "", "TriggerByString", "StringTriggerData");
        }
        inline app::TriggerByString_StringTriggerData* create() {
            return il2cpp::create_object<app::TriggerByString_StringTriggerData>(get_class());
        }
    } // namespace TriggerByString_StringTriggerData
} // namespace app::classes::types
