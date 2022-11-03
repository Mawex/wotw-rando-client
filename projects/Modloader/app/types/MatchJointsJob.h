#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchJointsJob {
        inline app::MatchJointsJob__Class** type_info = (app::MatchJointsJob__Class**)(modloader::win::memory::resolve_rva(0x04776E40));
        inline app::MatchJointsJob__Class* get_class() {
            return il2cpp::get_class<app::MatchJointsJob__Class>(type_info, "Moon.Animation", "MatchJointsJob");
        }
        inline app::MatchJointsJob* create() {
            return il2cpp::create_object<app::MatchJointsJob>(get_class());
        }
        inline app::MatchJointsJob__Boxed* box(app::MatchJointsJob value) {
            return il2cpp::box_value<app::MatchJointsJob__Boxed>(get_class(), value);
        }
    } // namespace MatchJointsJob
} // namespace app::classes::types
