using namespace app;

namespace app::methods::System::Runtime::Remoting::DisposerReplySink {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (DisposerReplySink * __this, IMessageSink * next, IDisposable * disposable));
IL2CPP_REGISTER_METHOD(0x02306340, IMessage *, SyncProcessMessage, (DisposerReplySink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x02306400, IMessageCtrl *, AsyncProcessMessage, (DisposerReplySink * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHODINFO(0x04772DB8, DisposerReplySink_AsyncProcessMessage__MethodInfo);
}
