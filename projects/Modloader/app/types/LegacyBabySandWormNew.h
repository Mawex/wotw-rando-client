#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyBabySandWormNew {
        namespace {
            inline app::LegacyBabySandWormNew__Class* type_info_ref = nullptr;
        }
        inline app::LegacyBabySandWormNew__Class** type_info = &type_info_ref;
        inline app::LegacyBabySandWormNew__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabySandWormNew__Class>(type_info, "", "LegacyBabySandWormNew");
        }
        inline app::LegacyBabySandWormNew* create() {
            return il2cpp::create_object<app::LegacyBabySandWormNew>(get_class());
        }
    } // namespace LegacyBabySandWormNew
} // namespace app::classes::types
