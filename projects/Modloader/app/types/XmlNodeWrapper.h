#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeWrapper {
        inline app::XmlNodeWrapper__Class** type_info = (app::XmlNodeWrapper__Class**)(modloader::win::memory::resolve_rva(0x04769DE0));
        inline app::XmlNodeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlNodeWrapper");
        }
        inline app::XmlNodeWrapper* create() {
            return il2cpp::create_object<app::XmlNodeWrapper>(get_class());
        }
    } // namespace XmlNodeWrapper
} // namespace app::classes::types
