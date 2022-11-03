#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShrineEntrance {
        namespace {
            inline app::ShrineEntrance__Class* type_info_ref = nullptr;
        }
        inline app::ShrineEntrance__Class** type_info = &type_info_ref;
        inline app::ShrineEntrance__Class* get_class() {
            return il2cpp::get_class<app::ShrineEntrance__Class>(type_info, "", "ShrineEntrance");
        }
        inline app::ShrineEntrance* create() {
            return il2cpp::create_object<app::ShrineEntrance>(get_class());
        }
    } // namespace ShrineEntrance
} // namespace app::classes::types
