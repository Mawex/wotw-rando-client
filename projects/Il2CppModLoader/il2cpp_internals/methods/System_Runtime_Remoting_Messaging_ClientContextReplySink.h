using namespace app;

namespace app::methods::System::Runtime::Remoting::Messaging::ClientContextReplySink {
IL2CPP_REGISTER_METHOD(0x01A9AC30, void, __ctor, (ClientContextReplySink * __this, Context * ctx, IMessageSink * replySink));
IL2CPP_REGISTER_METHOD(0x0230E550, IMessage *, SyncProcessMessage, (ClientContextReplySink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x0230E650, IMessageCtrl *, AsyncProcessMessage, (ClientContextReplySink * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHODINFO(0x047672D8, ClientContextReplySink_AsyncProcessMessage__MethodInfo);
}
