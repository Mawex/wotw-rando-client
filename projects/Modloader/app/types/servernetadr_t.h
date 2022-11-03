#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace servernetadr_t {
        inline app::servernetadr_t__Class** type_info = (app::servernetadr_t__Class**)(modloader::win::memory::resolve_rva(0x0476CF90));
        inline app::servernetadr_t__Class* get_class() {
            return il2cpp::get_class<app::servernetadr_t__Class>(type_info, "Steamworks", "servernetadr_t");
        }
        inline app::servernetadr_t* create() {
            return il2cpp::create_object<app::servernetadr_t>(get_class());
        }
        inline app::servernetadr_t__Boxed* box(app::servernetadr_t value) {
            return il2cpp::box_value<app::servernetadr_t__Boxed>(get_class(), value);
        }
    } // namespace servernetadr_t
} // namespace app::classes::types
