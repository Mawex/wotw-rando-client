#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkillPointsFloatProvider {
        namespace {
            inline app::SkillPointsFloatProvider__Class* type_info_ref = nullptr;
        }
        inline app::SkillPointsFloatProvider__Class** type_info = &type_info_ref;
        inline app::SkillPointsFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::SkillPointsFloatProvider__Class>(type_info, "", "SkillPointsFloatProvider");
        }
        inline app::SkillPointsFloatProvider* create() {
            return il2cpp::create_object<app::SkillPointsFloatProvider>(get_class());
        }
    } // namespace SkillPointsFloatProvider
} // namespace app::classes::types
