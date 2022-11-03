#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinWallSlide {
        namespace {
            inline app::SeinWallSlide__Class* type_info_ref = nullptr;
        }
        inline app::SeinWallSlide__Class** type_info = &type_info_ref;
        inline app::SeinWallSlide__Class* get_class() {
            return il2cpp::get_class<app::SeinWallSlide__Class>(type_info, "", "SeinWallSlide");
        }
        inline app::SeinWallSlide* create() {
            return il2cpp::create_object<app::SeinWallSlide>(get_class());
        }
    } // namespace SeinWallSlide
} // namespace app::classes::types
