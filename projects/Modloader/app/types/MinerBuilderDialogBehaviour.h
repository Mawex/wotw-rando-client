#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerBuilderDialogBehaviour {
        namespace {
            inline app::MinerBuilderDialogBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MinerBuilderDialogBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerBuilderDialogBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderDialogBehaviour__Class>(type_info, "", "MinerBuilderDialogBehaviour");
        }
        inline app::MinerBuilderDialogBehaviour* create() {
            return il2cpp::create_object<app::MinerBuilderDialogBehaviour>(get_class());
        }
    } // namespace MinerBuilderDialogBehaviour
} // namespace app::classes::types
