#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SampleOffsetCaptureAgent {
        namespace {
            inline app::SampleOffsetCaptureAgent__Class* type_info_ref = nullptr;
        }
        inline app::SampleOffsetCaptureAgent__Class** type_info = &type_info_ref;
        inline app::SampleOffsetCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SampleOffsetCaptureAgent__Class>(type_info, "", "SampleOffsetCaptureAgent");
        }
        inline app::SampleOffsetCaptureAgent* create() {
            return il2cpp::create_object<app::SampleOffsetCaptureAgent>(get_class());
        }
    } // namespace SampleOffsetCaptureAgent
} // namespace app::classes::types
