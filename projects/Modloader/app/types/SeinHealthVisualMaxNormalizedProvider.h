#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinHealthVisualMaxNormalizedProvider {
        namespace {
            inline app::SeinHealthVisualMaxNormalizedProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinHealthVisualMaxNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthVisualMaxNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthVisualMaxNormalizedProvider__Class>(type_info, "", "SeinHealthVisualMaxNormalizedProvider");
        }
        inline app::SeinHealthVisualMaxNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinHealthVisualMaxNormalizedProvider>(get_class());
        }
    } // namespace SeinHealthVisualMaxNormalizedProvider
} // namespace app::classes::types
