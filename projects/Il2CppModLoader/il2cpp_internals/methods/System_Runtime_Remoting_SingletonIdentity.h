using namespace app;

namespace app::methods::System::Runtime::Remoting::SingletonIdentity {
IL2CPP_REGISTER_METHOD(0x01D836D0, void, __ctor, (SingletonIdentity * __this, String * objectUri, Context * context, Type * objectType));
IL2CPP_REGISTER_METHOD(0x01D84E80, MarshalByRefObject *, GetServerObject, (SingletonIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01D85000, IMessage *, SyncObjectProcessMessage, (SingletonIdentity * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01D850E0, IMessageCtrl *, AsyncObjectProcessMessage, (SingletonIdentity * __this, IMessage * msg, IMessageSink * replySink));
}
