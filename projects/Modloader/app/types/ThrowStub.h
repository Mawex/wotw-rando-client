#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThrowStub {
        namespace {
            inline app::ThrowStub__Class* type_info_ref = nullptr;
        }
        inline app::ThrowStub__Class** type_info = &type_info_ref;
        inline app::ThrowStub__Class* get_class() {
            return il2cpp::get_class<app::ThrowStub__Class>(type_info, "Unity", "ThrowStub");
        }
        inline app::ThrowStub* create() {
            return il2cpp::create_object<app::ThrowStub>(get_class());
        }
    } // namespace ThrowStub
} // namespace app::classes::types
