#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationTrackingChain {
        namespace {
            inline app::RotationTrackingChain__Class* type_info_ref = nullptr;
        }
        inline app::RotationTrackingChain__Class** type_info = &type_info_ref;
        inline app::RotationTrackingChain__Class* get_class() {
            return il2cpp::get_class<app::RotationTrackingChain__Class>(type_info, "", "RotationTrackingChain");
        }
        inline app::RotationTrackingChain* create() {
            return il2cpp::create_object<app::RotationTrackingChain>(get_class());
        }
    } // namespace RotationTrackingChain
} // namespace app::classes::types
