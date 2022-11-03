#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SurfaceMaterialTimelinePlayer {
        namespace {
            inline app::SurfaceMaterialTimelinePlayer__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceMaterialTimelinePlayer__Class** type_info = &type_info_ref;
        inline app::SurfaceMaterialTimelinePlayer__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialTimelinePlayer__Class>(type_info, "", "SurfaceMaterialTimelinePlayer");
        }
        inline app::SurfaceMaterialTimelinePlayer* create() {
            return il2cpp::create_object<app::SurfaceMaterialTimelinePlayer>(get_class());
        }
    } // namespace SurfaceMaterialTimelinePlayer
} // namespace app::classes::types
