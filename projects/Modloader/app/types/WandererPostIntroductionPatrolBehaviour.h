#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererPostIntroductionPatrolBehaviour {
        namespace {
            inline app::WandererPostIntroductionPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererPostIntroductionPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererPostIntroductionPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostIntroductionPatrolBehaviour__Class>(type_info, "", "WandererPostIntroductionPatrolBehaviour");
        }
        inline app::WandererPostIntroductionPatrolBehaviour* create() {
            return il2cpp::create_object<app::WandererPostIntroductionPatrolBehaviour>(get_class());
        }
    } // namespace WandererPostIntroductionPatrolBehaviour
} // namespace app::classes::types
