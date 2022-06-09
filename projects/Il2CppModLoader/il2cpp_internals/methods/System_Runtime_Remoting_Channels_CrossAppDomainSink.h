#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Channels::CrossAppDomainSink {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::CrossAppDomainSink * this_ptr, int32_t domain_i_d));
IL2CPP_REGISTER_METHOD(0x01A9EBF0, CrossAppDomainSink *, GetSink, (int32_t domain_i_d));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TargetDomainId, (app::CrossAppDomainSink * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A9F020, CrossAppDomainSink_ProcessMessageRes, ProcessMessageInDomain, (app::Byte__Array * arr_request, app::CADMethodCallMessage * cad_msg));
IL2CPP_REGISTER_METHOD(0x01A9F3E0, IMessage *, SyncProcessMessage, (app::CrossAppDomainSink * this_ptr, app::IMessage * msg_request));
IL2CPP_REGISTER_METHOD(0x01A9F6C0, IMessageCtrl *, AsyncProcessMessage, (app::CrossAppDomainSink * this_ptr, app::IMessage * req_msg, app::IMessageSink * reply_sink));
IL2CPP_REGISTER_METHOD(0x01A9F8F0, void, SendAsyncMessage, (app::CrossAppDomainSink * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHOD(0x01A9FA00, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01A9FBC0, void, _AsyncProcessMessage_b__10_0, (app::CrossAppDomainSink * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHODINFO(0x04793E58, CrossAppDomainSink__AsyncProcessMessage_b__10_0__MethodInfo);
}
