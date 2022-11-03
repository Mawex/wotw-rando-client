#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitSoundTimelineHooks {
        namespace {
            inline app::HitSoundTimelineHooks__Class* type_info_ref = nullptr;
        }
        inline app::HitSoundTimelineHooks__Class** type_info = &type_info_ref;
        inline app::HitSoundTimelineHooks__Class* get_class() {
            return il2cpp::get_class<app::HitSoundTimelineHooks__Class>(type_info, "", "HitSoundTimelineHooks");
        }
        inline app::HitSoundTimelineHooks* create() {
            return il2cpp::create_object<app::HitSoundTimelineHooks>(get_class());
        }
    } // namespace HitSoundTimelineHooks
} // namespace app::classes::types
