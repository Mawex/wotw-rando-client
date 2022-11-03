#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseSpline_SplineIterator {
        inline app::BaseSpline_SplineIterator__Class** type_info = (app::BaseSpline_SplineIterator__Class**)(modloader::win::memory::resolve_rva(0x04729388));
        inline app::BaseSpline_SplineIterator__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_SplineIterator__Class>(type_info, "", "BaseSpline", "SplineIterator");
        }
        inline app::BaseSpline_SplineIterator* create() {
            return il2cpp::create_object<app::BaseSpline_SplineIterator>(get_class());
        }
    } // namespace BaseSpline_SplineIterator
} // namespace app::classes::types
