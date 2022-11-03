#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureAnimationGUIText {
        namespace {
            inline app::TextureAnimationGUIText__Class* type_info_ref = nullptr;
        }
        inline app::TextureAnimationGUIText__Class** type_info = &type_info_ref;
        inline app::TextureAnimationGUIText__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationGUIText__Class>(type_info, "", "TextureAnimationGUIText");
        }
        inline app::TextureAnimationGUIText* create() {
            return il2cpp::create_object<app::TextureAnimationGUIText>(get_class());
        }
    } // namespace TextureAnimationGUIText
} // namespace app::classes::types
