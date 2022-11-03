#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceTargetIndicator {
        namespace {
            inline app::RaceTargetIndicator__Class* type_info_ref = nullptr;
        }
        inline app::RaceTargetIndicator__Class** type_info = &type_info_ref;
        inline app::RaceTargetIndicator__Class* get_class() {
            return il2cpp::get_class<app::RaceTargetIndicator__Class>(type_info, "", "RaceTargetIndicator");
        }
        inline app::RaceTargetIndicator* create() {
            return il2cpp::create_object<app::RaceTargetIndicator>(get_class());
        }
    } // namespace RaceTargetIndicator
} // namespace app::classes::types
