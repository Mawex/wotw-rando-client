#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceScaleModifier {
        inline app::TurbulenceScaleModifier__Class** type_info = (app::TurbulenceScaleModifier__Class**)(modloader::win::memory::resolve_rva(0x04762458));
        inline app::TurbulenceScaleModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceScaleModifier__Class>(type_info, "", "TurbulenceScaleModifier");
        }
        inline app::TurbulenceScaleModifier* create() {
            return il2cpp::create_object<app::TurbulenceScaleModifier>(get_class());
        }
    } // namespace TurbulenceScaleModifier
} // namespace app::classes::types
