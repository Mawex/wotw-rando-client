#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossMeleeSlapBehaviour {
        namespace {
            inline app::KwolokBossMeleeSlapBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossMeleeSlapBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossMeleeSlapBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossMeleeSlapBehaviour__Class>(type_info, "", "KwolokBossMeleeSlapBehaviour");
        }
        inline app::KwolokBossMeleeSlapBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossMeleeSlapBehaviour>(get_class());
        }
    } // namespace KwolokBossMeleeSlapBehaviour
} // namespace app::classes::types
