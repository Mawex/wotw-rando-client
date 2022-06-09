#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Channels::ChannelServices {
IL2CPP_REGISTER_METHOD(0x01A9B640, CrossContextChannel *, get_CrossContextChannel, ());
IL2CPP_REGISTER_METHOD(0x01A9B6E0, IMessageSink *, CreateClientChannelSinkChain_1, (app::String * url, app::Object * remote_channel_data, app::String * * object_uri));
IL2CPP_REGISTER_METHOD(0x01A9BD00, IMessageSink *, CreateClientChannelSinkChain_2, (app::IChannelSender * sender, app::String * url, app::Object__Array * channel_data_array, app::String * * object_uri));
IL2CPP_REGISTER_METHOD(0x01A9BE50, void, RegisterChannel_1, (app::IChannel * chnl));
IL2CPP_REGISTER_METHOD(0x01A9BEF0, void, RegisterChannel_2, (app::IChannel * chnl, bool ensure_security));
IL2CPP_REGISTER_METHODINFO(0x0474E820, ChannelServices_RegisterChannel_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A9C4B0, void, RegisterChannelConfig, (app::ChannelData * channel));
IL2CPP_REGISTER_METHODINFO(0x04716458, ChannelServices_RegisterChannelConfig__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A9CFE0, Object *, CreateProvider, (app::ProviderData * prov));
IL2CPP_REGISTER_METHODINFO(0x0470F038, ChannelServices_CreateProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A9D360, IMessage *, SyncDispatchMessage, (app::IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01A9D490, ReturnMessage *, CheckIncomingMessage, (app::IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01A9D7F0, IMessage *, CheckReturnMessage, (app::IMessage * call_msg, app::IMessage * ret_msg));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsLocalCall, (app::IMessage * call_msg));
IL2CPP_REGISTER_METHOD(0x01A9DBE0, Object__Array *, GetCurrentChannelInfo, ());
IL2CPP_REGISTER_METHOD(0x01A9E010, void, __cctor, ());
}
