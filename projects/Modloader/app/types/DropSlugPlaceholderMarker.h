#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugPlaceholderMarker {
        namespace {
            inline app::DropSlugPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::DropSlugPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::DropSlugPlaceholderMarker__Class>(type_info, "", "DropSlugPlaceholderMarker");
        }
        inline app::DropSlugPlaceholderMarker* create() {
            return il2cpp::create_object<app::DropSlugPlaceholderMarker>(get_class());
        }
    } // namespace DropSlugPlaceholderMarker
} // namespace app::classes::types
