#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HandleProcessCorruptedStateExceptionsAttribute {
        namespace {
            inline app::HandleProcessCorruptedStateExceptionsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::HandleProcessCorruptedStateExceptionsAttribute__Class** type_info = &type_info_ref;
        inline app::HandleProcessCorruptedStateExceptionsAttribute__Class* get_class() {
            return il2cpp::get_class<app::HandleProcessCorruptedStateExceptionsAttribute__Class>(type_info, "System.Runtime.ExceptionServices", "HandleProcessCorruptedStateExceptionsAttribute");
        }
        inline app::HandleProcessCorruptedStateExceptionsAttribute* create() {
            return il2cpp::create_object<app::HandleProcessCorruptedStateExceptionsAttribute>(get_class());
        }
    } // namespace HandleProcessCorruptedStateExceptionsAttribute
} // namespace app::classes::types
