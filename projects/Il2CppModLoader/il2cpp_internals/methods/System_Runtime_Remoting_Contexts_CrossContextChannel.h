using namespace app;

namespace app::methods::System::Runtime::Remoting::Contexts::CrossContextChannel {
IL2CPP_REGISTER_METHOD(0x023048D0, IMessage *, SyncProcessMessage, (CrossContextChannel * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x02304CE0, IMessageCtrl *, AsyncProcessMessage, (CrossContextChannel * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CrossContextChannel * __this));
}
