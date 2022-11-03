#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderIntroNode {
        namespace {
            inline app::BuilderIntroNode__Class* type_info_ref = nullptr;
        }
        inline app::BuilderIntroNode__Class** type_info = &type_info_ref;
        inline app::BuilderIntroNode__Class* get_class() {
            return il2cpp::get_class<app::BuilderIntroNode__Class>(type_info, "", "BuilderIntroNode");
        }
        inline app::BuilderIntroNode* create() {
            return il2cpp::create_object<app::BuilderIntroNode>(get_class());
        }
    } // namespace BuilderIntroNode
} // namespace app::classes::types
