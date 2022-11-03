#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundZoneTrigger {
        namespace {
            inline app::SoundZoneTrigger__Class* type_info_ref = nullptr;
        }
        inline app::SoundZoneTrigger__Class** type_info = &type_info_ref;
        inline app::SoundZoneTrigger__Class* get_class() {
            return il2cpp::get_class<app::SoundZoneTrigger__Class>(type_info, "", "SoundZoneTrigger");
        }
        inline app::SoundZoneTrigger* create() {
            return il2cpp::create_object<app::SoundZoneTrigger>(get_class());
        }
    } // namespace SoundZoneTrigger
} // namespace app::classes::types
