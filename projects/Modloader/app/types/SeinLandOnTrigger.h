#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLandOnTrigger {
        namespace {
            inline app::SeinLandOnTrigger__Class* type_info_ref = nullptr;
        }
        inline app::SeinLandOnTrigger__Class** type_info = &type_info_ref;
        inline app::SeinLandOnTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinLandOnTrigger__Class>(type_info, "", "SeinLandOnTrigger");
        }
        inline app::SeinLandOnTrigger* create() {
            return il2cpp::create_object<app::SeinLandOnTrigger>(get_class());
        }
    } // namespace SeinLandOnTrigger
} // namespace app::classes::types
