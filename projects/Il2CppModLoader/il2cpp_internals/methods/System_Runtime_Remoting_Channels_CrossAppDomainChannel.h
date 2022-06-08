#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Channels::CrossAppDomainChannel {
IL2CPP_REGISTER_METHOD(0x01A9E3F0, void, RegisterCrossAppDomainChannel, ());
IL2CPP_REGISTER_METHOD(0x01A9E640, String *, get_ChannelName, (CrossAppDomainChannel * __this));
IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_ChannelPriority, (CrossAppDomainChannel * __this));
IL2CPP_REGISTER_METHOD(0x01A9E6C0, Object *, get_ChannelData, (CrossAppDomainChannel * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartListening, (CrossAppDomainChannel * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x01A9E830, IMessageSink *, CreateMessageSink, (CrossAppDomainChannel * __this, String * url, Object * data, String * * uri));
IL2CPP_REGISTER_METHODINFO(0x0470BD48, CrossAppDomainChannel_CreateMessageSink__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CrossAppDomainChannel * __this));
IL2CPP_REGISTER_METHOD(0x01A9E9E0, void, __cctor, ());
}
