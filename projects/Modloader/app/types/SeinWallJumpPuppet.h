#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinWallJumpPuppet {
        inline app::SeinWallJumpPuppet__Class** type_info = (app::SeinWallJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x04798BF0));
        inline app::SeinWallJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinWallJumpPuppet__Class>(type_info, "", "SeinWallJumpPuppet");
        }
        inline app::SeinWallJumpPuppet* create() {
            return il2cpp::create_object<app::SeinWallJumpPuppet>(get_class());
        }
    } // namespace SeinWallJumpPuppet
} // namespace app::classes::types
