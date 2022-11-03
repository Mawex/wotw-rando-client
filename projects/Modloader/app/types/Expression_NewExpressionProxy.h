#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Expression_NewExpressionProxy {
        namespace {
            inline app::Expression_NewExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_NewExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_NewExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_NewExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "NewExpressionProxy");
        }
        inline app::Expression_NewExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_NewExpressionProxy>(get_class());
        }
    } // namespace Expression_NewExpressionProxy
} // namespace app::classes::types
