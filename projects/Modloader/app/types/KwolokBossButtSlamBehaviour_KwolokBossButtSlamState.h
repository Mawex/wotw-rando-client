#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_KwolokBossButtSlamState {
        namespace {
            inline app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class** type_info = &type_info_ref;
        inline app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class>(type_info, "", "KwolokBossButtSlamBehaviour", "KwolokBossButtSlamState");
        }
        inline app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_KwolokBossButtSlamState
} // namespace app::classes::types
