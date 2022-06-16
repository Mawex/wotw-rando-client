#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::ChannelData {
    IL2CPP_REGISTER_METHOD(0x01A99A40, app::ArrayList *, get_ServerProviders, (app::ChannelData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A99BA0, app::ArrayList *, get_ClientProviders, (app::ChannelData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A99D00, app::Hashtable *, get_CustomProperties, (app::ChannelData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A99E70, void, CopyFrom, (app::ChannelData * this_ptr, app::ChannelData * other))
    IL2CPP_REGISTER_METHOD(0x01A9A7C0, void, ctor, (app::ChannelData * this_ptr))
}
