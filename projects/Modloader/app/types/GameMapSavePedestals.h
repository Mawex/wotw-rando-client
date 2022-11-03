#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapSavePedestals {
        namespace {
            inline app::GameMapSavePedestals__Class* type_info_ref = nullptr;
        }
        inline app::GameMapSavePedestals__Class** type_info = &type_info_ref;
        inline app::GameMapSavePedestals__Class* get_class() {
            return il2cpp::get_class<app::GameMapSavePedestals__Class>(type_info, "", "GameMapSavePedestals");
        }
        inline app::GameMapSavePedestals* create() {
            return il2cpp::create_object<app::GameMapSavePedestals>(get_class());
        }
    } // namespace GameMapSavePedestals
} // namespace app::classes::types
