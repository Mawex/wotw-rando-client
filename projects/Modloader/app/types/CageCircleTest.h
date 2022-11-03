#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CageCircleTest {
        namespace {
            inline app::CageCircleTest__Class* type_info_ref = nullptr;
        }
        inline app::CageCircleTest__Class** type_info = &type_info_ref;
        inline app::CageCircleTest__Class* get_class() {
            return il2cpp::get_class<app::CageCircleTest__Class>(type_info, "", "CageCircleTest");
        }
        inline app::CageCircleTest* create() {
            return il2cpp::create_object<app::CageCircleTest>(get_class());
        }
    } // namespace CageCircleTest
} // namespace app::classes::types
