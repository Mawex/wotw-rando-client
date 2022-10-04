#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IChannelSender {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IChannelSender__Class** type_info;
        inline app::IChannelSender__Class* get_class() {
            return il2cpp::get_class<app::IChannelSender__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannelSender");
        }
        inline app::IChannelSender* create() {
            return il2cpp::create_object<app::IChannelSender>(get_class());
        }
    } // namespace IChannelSender
} // namespace app::classes::types
