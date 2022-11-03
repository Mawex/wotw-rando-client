#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Larva {
        namespace {
            inline app::Larva__Class* type_info_ref = nullptr;
        }
        inline app::Larva__Class** type_info = &type_info_ref;
        inline app::Larva__Class* get_class() {
            return il2cpp::get_class<app::Larva__Class>(type_info, "", "Larva");
        }
        inline app::Larva* create() {
            return il2cpp::create_object<app::Larva>(get_class());
        }
    } // namespace Larva
} // namespace app::classes::types
