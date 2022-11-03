#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenshotLegacySetup {
        namespace {
            inline app::ScreenshotLegacySetup__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotLegacySetup__Class** type_info = &type_info_ref;
        inline app::ScreenshotLegacySetup__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotLegacySetup__Class>(type_info, "", "ScreenshotLegacySetup");
        }
        inline app::ScreenshotLegacySetup* create() {
            return il2cpp::create_object<app::ScreenshotLegacySetup>(get_class());
        }
        inline app::ScreenshotLegacySetup__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotLegacySetup__Array>(get_class(), size);
        }
        inline app::ScreenshotLegacySetup__Array* create_array(const std::vector<app::ScreenshotLegacySetup*>& items) {
            return il2cpp::array_new<app::ScreenshotLegacySetup__Array>(get_class(), items);
        }
    } // namespace ScreenshotLegacySetup
} // namespace app::classes::types
