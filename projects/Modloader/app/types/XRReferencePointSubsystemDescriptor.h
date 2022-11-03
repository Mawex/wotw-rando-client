#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRReferencePointSubsystemDescriptor {
        namespace {
            inline app::XRReferencePointSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::XRReferencePointSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::XRReferencePointSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRReferencePointSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental.XR", "XRReferencePointSubsystemDescriptor");
        }
        inline app::XRReferencePointSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRReferencePointSubsystemDescriptor>(get_class());
        }
    } // namespace XRReferencePointSubsystemDescriptor
} // namespace app::classes::types
