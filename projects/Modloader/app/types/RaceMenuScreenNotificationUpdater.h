#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceMenuScreenNotificationUpdater {
        namespace {
            inline app::RaceMenuScreenNotificationUpdater__Class* type_info_ref = nullptr;
        }
        inline app::RaceMenuScreenNotificationUpdater__Class** type_info = &type_info_ref;
        inline app::RaceMenuScreenNotificationUpdater__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenNotificationUpdater__Class>(type_info, "", "RaceMenuScreenNotificationUpdater");
        }
        inline app::RaceMenuScreenNotificationUpdater* create() {
            return il2cpp::create_object<app::RaceMenuScreenNotificationUpdater>(get_class());
        }
    } // namespace RaceMenuScreenNotificationUpdater
} // namespace app::classes::types
