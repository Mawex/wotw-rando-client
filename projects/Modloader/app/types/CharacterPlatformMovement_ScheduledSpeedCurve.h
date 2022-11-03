#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_ScheduledSpeedCurve {
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Class** type_info = (app::CharacterPlatformMovement_ScheduledSpeedCurve__Class**)(modloader::win::memory::resolve_rva(0x0472D8B8));
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_ScheduledSpeedCurve__Class>(type_info, "", "CharacterPlatformMovement", "ScheduledSpeedCurve");
        }
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_ScheduledSpeedCurve>(get_class());
        }
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterPlatformMovement_ScheduledSpeedCurve__Array>(get_class(), size);
        }
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Array* create_array(const std::vector<app::CharacterPlatformMovement_ScheduledSpeedCurve*>& items) {
            return il2cpp::array_new<app::CharacterPlatformMovement_ScheduledSpeedCurve__Array>(get_class(), items);
        }
    } // namespace CharacterPlatformMovement_ScheduledSpeedCurve
} // namespace app::classes::types
