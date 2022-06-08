#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::ChannelData {
IL2CPP_REGISTER_METHOD(0x01A99A40, ArrayList *, get_ServerProviders, (ChannelData * __this));
IL2CPP_REGISTER_METHOD(0x01A99BA0, ArrayList *, get_ClientProviders, (ChannelData * __this));
IL2CPP_REGISTER_METHOD(0x01A99D00, Hashtable *, get_CustomProperties, (ChannelData * __this));
IL2CPP_REGISTER_METHOD(0x01A99E70, void, CopyFrom, (ChannelData * __this, ChannelData * other));
IL2CPP_REGISTER_METHOD(0x01A9A7C0, void, __ctor, (ChannelData * __this));
}
