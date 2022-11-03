#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokTongueSyncGroup {
        namespace {
            inline app::KwolokTongueSyncGroup__Class* type_info_ref = nullptr;
        }
        inline app::KwolokTongueSyncGroup__Class** type_info = &type_info_ref;
        inline app::KwolokTongueSyncGroup__Class* get_class() {
            return il2cpp::get_class<app::KwolokTongueSyncGroup__Class>(type_info, "", "KwolokTongueSyncGroup");
        }
        inline app::KwolokTongueSyncGroup* create() {
            return il2cpp::create_object<app::KwolokTongueSyncGroup>(get_class());
        }
    } // namespace KwolokTongueSyncGroup
} // namespace app::classes::types
