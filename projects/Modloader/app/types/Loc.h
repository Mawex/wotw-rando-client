#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Loc {
        namespace {
            inline app::Loc__Class* type_info_ref = nullptr;
        }
        inline app::Loc__Class** type_info = &type_info_ref;
        inline app::Loc__Class* get_class() {
            return il2cpp::get_class<app::Loc__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Loc");
        }
        inline app::Loc* create() {
            return il2cpp::create_object<app::Loc>(get_class());
        }
        inline app::Loc__Array* create_array(int size) {
            return il2cpp::array_new<app::Loc__Array>(get_class(), size);
        }
        inline app::Loc__Array* create_array(const std::vector<app::Loc*>& items) {
            return il2cpp::array_new<app::Loc__Array>(get_class(), items);
        }
    } // namespace Loc
} // namespace app::classes::types
