#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RasterState {
        inline app::RasterState__Class** type_info = (app::RasterState__Class**)(modloader::win::memory::resolve_rva(0x0472F550));
        inline app::RasterState__Class* get_class() {
            return il2cpp::get_class<app::RasterState__Class>(type_info, "UnityEngine.Experimental.Rendering", "RasterState");
        }
        inline app::RasterState* create() {
            return il2cpp::create_object<app::RasterState>(get_class());
        }
        inline app::RasterState__Boxed* box(app::RasterState value) {
            return il2cpp::box_value<app::RasterState__Boxed>(get_class(), value);
        }
    } // namespace RasterState
} // namespace app::classes::types
