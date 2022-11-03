#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellIconsCollection {
        namespace {
            inline app::SpellIconsCollection__Class* type_info_ref = nullptr;
        }
        inline app::SpellIconsCollection__Class** type_info = &type_info_ref;
        inline app::SpellIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::SpellIconsCollection__Class>(type_info, "", "SpellIconsCollection");
        }
        inline app::SpellIconsCollection* create() {
            return il2cpp::create_object<app::SpellIconsCollection>(get_class());
        }
    } // namespace SpellIconsCollection
} // namespace app::classes::types
