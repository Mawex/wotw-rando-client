#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossEscapeBehaviour {
        namespace {
            inline app::SpiderBossEscapeBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossEscapeBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossEscapeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEscapeBehaviour__Class>(type_info, "", "SpiderBossEscapeBehaviour");
        }
        inline app::SpiderBossEscapeBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossEscapeBehaviour>(get_class());
        }
    } // namespace SpiderBossEscapeBehaviour
} // namespace app::classes::types
