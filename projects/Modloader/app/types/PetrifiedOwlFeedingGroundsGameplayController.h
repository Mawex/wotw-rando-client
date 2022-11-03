#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsGameplayController {
        namespace {
            inline app::PetrifiedOwlFeedingGroundsGameplayController__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlFeedingGroundsGameplayController__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlFeedingGroundsGameplayController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundsGameplayController__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsGameplayController");
        }
        inline app::PetrifiedOwlFeedingGroundsGameplayController* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsGameplayController>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsGameplayController
} // namespace app::classes::types
