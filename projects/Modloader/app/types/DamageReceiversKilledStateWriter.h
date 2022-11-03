#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageReceiversKilledStateWriter {
        namespace {
            inline app::DamageReceiversKilledStateWriter__Class* type_info_ref = nullptr;
        }
        inline app::DamageReceiversKilledStateWriter__Class** type_info = &type_info_ref;
        inline app::DamageReceiversKilledStateWriter__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiversKilledStateWriter__Class>(type_info, "", "DamageReceiversKilledStateWriter");
        }
        inline app::DamageReceiversKilledStateWriter* create() {
            return il2cpp::create_object<app::DamageReceiversKilledStateWriter>(get_class());
        }
    } // namespace DamageReceiversKilledStateWriter
} // namespace app::classes::types
