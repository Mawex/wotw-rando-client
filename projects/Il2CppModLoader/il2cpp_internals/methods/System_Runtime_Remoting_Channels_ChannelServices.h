#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Channels::ChannelServices {
IL2CPP_REGISTER_METHOD(0x01A9B640, CrossContextChannel *, get_CrossContextChannel, ());
IL2CPP_REGISTER_METHOD(0x01A9B6E0, IMessageSink *, CreateClientChannelSinkChain, (String * url, Object * remoteChannelData, String * * objectUri));
IL2CPP_REGISTER_METHOD(0x01A9BD00, IMessageSink *, CreateClientChannelSinkChain, (IChannelSender * sender, String * url, Object__Array * channelDataArray, String * * objectUri));
IL2CPP_REGISTER_METHOD(0x01A9BE50, void, RegisterChannel, (IChannel * chnl));
IL2CPP_REGISTER_METHOD(0x01A9BEF0, void, RegisterChannel, (IChannel * chnl, bool ensureSecurity));
IL2CPP_REGISTER_METHODINFO(0x0474E820, ChannelServices_RegisterChannel_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A9C4B0, void, RegisterChannelConfig, (ChannelData * channel));
IL2CPP_REGISTER_METHODINFO(0x04716458, ChannelServices_RegisterChannelConfig__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A9CFE0, Object *, CreateProvider, (ProviderData * prov));
IL2CPP_REGISTER_METHODINFO(0x0470F038, ChannelServices_CreateProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A9D360, IMessage *, SyncDispatchMessage, (IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01A9D490, ReturnMessage *, CheckIncomingMessage, (IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01A9D7F0, IMessage *, CheckReturnMessage, (IMessage * callMsg, IMessage * retMsg));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsLocalCall, (IMessage * callMsg));
IL2CPP_REGISTER_METHOD(0x01A9DBE0, Object__Array *, GetCurrentChannelInfo, ());
IL2CPP_REGISTER_METHOD(0x01A9E010, void, __cctor, ());
}
