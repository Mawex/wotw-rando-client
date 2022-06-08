using namespace app;

namespace app::methods::System::Runtime::Remoting::ClientActivatedIdentity {
IL2CPP_REGISTER_METHOD(0x01A9FF60, void, __ctor, (ClientActivatedIdentity * __this, String * objectUri, Type * objectType));
IL2CPP_REGISTER_METHOD(0x002FBB40, MarshalByRefObject *, GetServerObject, (ClientActivatedIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, SetClientProxy, (ClientActivatedIdentity * __this, MarshalByRefObject * obj));
IL2CPP_REGISTER_METHOD(0x01A9FF80, void, OnLifetimeExpired, (ClientActivatedIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01AA0030, IMessage *, SyncObjectProcessMessage, (ClientActivatedIdentity * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01AA0110, IMessageCtrl *, AsyncObjectProcessMessage, (ClientActivatedIdentity * __this, IMessage * msg, IMessageSink * replySink));
}
