#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestItemPickupPlaceholder {
        namespace {
            inline app::QuestItemPickupPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::QuestItemPickupPlaceholder__Class** type_info = &type_info_ref;
        inline app::QuestItemPickupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::QuestItemPickupPlaceholder__Class>(type_info, "", "QuestItemPickupPlaceholder");
        }
        inline app::QuestItemPickupPlaceholder* create() {
            return il2cpp::create_object<app::QuestItemPickupPlaceholder>(get_class());
        }
    } // namespace QuestItemPickupPlaceholder
} // namespace app::classes::types
