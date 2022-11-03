#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DontCrushPlayer {
        namespace {
            inline app::DontCrushPlayer__Class* type_info_ref = nullptr;
        }
        inline app::DontCrushPlayer__Class** type_info = &type_info_ref;
        inline app::DontCrushPlayer__Class* get_class() {
            return il2cpp::get_class<app::DontCrushPlayer__Class>(type_info, "", "DontCrushPlayer");
        }
        inline app::DontCrushPlayer* create() {
            return il2cpp::create_object<app::DontCrushPlayer>(get_class());
        }
    } // namespace DontCrushPlayer
} // namespace app::classes::types
