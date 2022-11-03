#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostReplayTimelinePreview {
        namespace {
            inline app::GhostReplayTimelinePreview__Class* type_info_ref = nullptr;
        }
        inline app::GhostReplayTimelinePreview__Class** type_info = &type_info_ref;
        inline app::GhostReplayTimelinePreview__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayTimelinePreview__Class>(type_info, "", "GhostReplayTimelinePreview");
        }
        inline app::GhostReplayTimelinePreview* create() {
            return il2cpp::create_object<app::GhostReplayTimelinePreview>(get_class());
        }
    } // namespace GhostReplayTimelinePreview
} // namespace app::classes::types
