#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HHTMLBrowser {
        inline app::HHTMLBrowser__Class** type_info = (app::HHTMLBrowser__Class**)(modloader::win::memory::resolve_rva(0x04756660));
        inline app::HHTMLBrowser__Class* get_class() {
            return il2cpp::get_class<app::HHTMLBrowser__Class>(type_info, "Steamworks", "HHTMLBrowser");
        }
        inline app::HHTMLBrowser* create() {
            return il2cpp::create_object<app::HHTMLBrowser>(get_class());
        }
        inline app::HHTMLBrowser__Boxed* box(app::HHTMLBrowser value) {
            return il2cpp::box_value<app::HHTMLBrowser__Boxed>(get_class(), value);
        }
    } // namespace HHTMLBrowser
} // namespace app::classes::types
