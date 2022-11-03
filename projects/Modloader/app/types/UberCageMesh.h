#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberCageMesh {
        namespace {
            inline app::UberCageMesh__Class* type_info_ref = nullptr;
        }
        inline app::UberCageMesh__Class** type_info = &type_info_ref;
        inline app::UberCageMesh__Class* get_class() {
            return il2cpp::get_class<app::UberCageMesh__Class>(type_info, "", "UberCageMesh");
        }
        inline app::UberCageMesh* create() {
            return il2cpp::create_object<app::UberCageMesh>(get_class());
        }
    } // namespace UberCageMesh
} // namespace app::classes::types
