#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerEscapeController {
        namespace {
            inline app::NightCrawlerEscapeController__Class* type_info_ref = nullptr;
        }
        inline app::NightCrawlerEscapeController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerEscapeController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerEscapeController__Class>(type_info, "", "NightCrawlerEscapeController");
        }
        inline app::NightCrawlerEscapeController* create() {
            return il2cpp::create_object<app::NightCrawlerEscapeController>(get_class());
        }
    } // namespace NightCrawlerEscapeController
} // namespace app::classes::types
