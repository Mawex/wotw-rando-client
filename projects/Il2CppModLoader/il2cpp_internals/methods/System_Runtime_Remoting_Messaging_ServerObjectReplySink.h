using namespace app;

namespace app::methods::System::Runtime::Remoting::Messaging::ServerObjectReplySink {
IL2CPP_REGISTER_METHOD(0x01A9AC30, void, __ctor, (ServerObjectReplySink * __this, ServerIdentity * identity, IMessageSink * replySink));
IL2CPP_REGISTER_METHOD(0x0231A250, IMessage *, SyncProcessMessage, (ServerObjectReplySink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x0231A320, IMessageCtrl *, AsyncProcessMessage, (ServerObjectReplySink * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHODINFO(0x04763498, ServerObjectReplySink_AsyncProcessMessage__MethodInfo);
}
