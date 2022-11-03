#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrailPerformanceTester {
        namespace {
            inline app::MoonTrailPerformanceTester__Class* type_info_ref = nullptr;
        }
        inline app::MoonTrailPerformanceTester__Class** type_info = &type_info_ref;
        inline app::MoonTrailPerformanceTester__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailPerformanceTester__Class>(type_info, "", "MoonTrailPerformanceTester");
        }
        inline app::MoonTrailPerformanceTester* create() {
            return il2cpp::create_object<app::MoonTrailPerformanceTester>(get_class());
        }
    } // namespace MoonTrailPerformanceTester
} // namespace app::classes::types
