#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDashNew {
        inline app::SeinDashNew__Class** type_info = (app::SeinDashNew__Class**)(modloader::win::memory::resolve_rva(0x04776E58));
        inline app::SeinDashNew__Class* get_class() {
            return il2cpp::get_class<app::SeinDashNew__Class>(type_info, "", "SeinDashNew");
        }
        inline app::SeinDashNew* create() {
            return il2cpp::create_object<app::SeinDashNew>(get_class());
        }
    } // namespace SeinDashNew
} // namespace app::classes::types
