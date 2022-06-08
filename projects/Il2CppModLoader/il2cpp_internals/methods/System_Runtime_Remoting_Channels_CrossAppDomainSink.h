using namespace app;

namespace app::methods::System::Runtime::Remoting::Channels::CrossAppDomainSink {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (CrossAppDomainSink * __this, int32_t domainID));
IL2CPP_REGISTER_METHOD(0x01A9EBF0, CrossAppDomainSink *, GetSink, (int32_t domainID));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TargetDomainId, (CrossAppDomainSink * __this));
IL2CPP_REGISTER_METHOD(0x01A9F020, CrossAppDomainSink_ProcessMessageRes, ProcessMessageInDomain, (Byte__Array * arrRequest, CADMethodCallMessage * cadMsg));
IL2CPP_REGISTER_METHOD(0x01A9F3E0, IMessage *, SyncProcessMessage, (CrossAppDomainSink * __this, IMessage * msgRequest));
IL2CPP_REGISTER_METHOD(0x01A9F6C0, IMessageCtrl *, AsyncProcessMessage, (CrossAppDomainSink * __this, IMessage * reqMsg, IMessageSink * replySink));
IL2CPP_REGISTER_METHOD(0x01A9F8F0, void, SendAsyncMessage, (CrossAppDomainSink * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x01A9FA00, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A9FBC0, void, _AsyncProcessMessage_b__10_0, (CrossAppDomainSink * __this, Object * data));
IL2CPP_REGISTER_METHODINFO(0x04793E58, CrossAppDomainSink__AsyncProcessMessage_b__10_0__MethodInfo);
}
