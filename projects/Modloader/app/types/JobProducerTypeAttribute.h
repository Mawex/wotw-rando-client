#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JobProducerTypeAttribute {
        namespace {
            inline app::JobProducerTypeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::JobProducerTypeAttribute__Class** type_info = &type_info_ref;
        inline app::JobProducerTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::JobProducerTypeAttribute__Class>(type_info, "Unity.Jobs.LowLevel.Unsafe", "JobProducerTypeAttribute");
        }
        inline app::JobProducerTypeAttribute* create() {
            return il2cpp::create_object<app::JobProducerTypeAttribute>(get_class());
        }
    } // namespace JobProducerTypeAttribute
} // namespace app::classes::types
