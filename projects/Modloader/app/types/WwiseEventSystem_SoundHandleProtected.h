#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandleProtected {
        inline app::WwiseEventSystem_SoundHandleProtected__Class** type_info = (app::WwiseEventSystem_SoundHandleProtected__Class**)(modloader::win::memory::resolve_rva(0x04722CC0));
        inline app::WwiseEventSystem_SoundHandleProtected__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_SoundHandleProtected__Class>(type_info, "Moon.Wwise", "WwiseEventSystem", "SoundHandleProtected");
        }
        inline app::WwiseEventSystem_SoundHandleProtected* create() {
            return il2cpp::create_object<app::WwiseEventSystem_SoundHandleProtected>(get_class());
        }
        inline app::WwiseEventSystem_SoundHandleProtected__Array* create_array(int size) {
            return il2cpp::array_new<app::WwiseEventSystem_SoundHandleProtected__Array>(get_class(), size);
        }
        inline app::WwiseEventSystem_SoundHandleProtected__Array* create_array(const std::vector<app::WwiseEventSystem_SoundHandleProtected*>& items) {
            return il2cpp::array_new<app::WwiseEventSystem_SoundHandleProtected__Array>(get_class(), items);
        }
    } // namespace WwiseEventSystem_SoundHandleProtected
} // namespace app::classes::types
