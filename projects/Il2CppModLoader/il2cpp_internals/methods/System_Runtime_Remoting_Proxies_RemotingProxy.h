using namespace app;

namespace app::methods::System::Runtime::Remoting::Proxies::RemotingProxy {
IL2CPP_REGISTER_METHOD(0x0231ECB0, void, __ctor, (RemotingProxy * __this, Type * type, ClientIdentity * identity));
IL2CPP_REGISTER_METHOD(0x0231EDA0, void, __ctor, (RemotingProxy * __this, Type * type, String * activationUrl, Object__Array * activationAttributes));
IL2CPP_REGISTER_METHOD(0x0231EE70, IMessage *, Invoke, (RemotingProxy * __this, IMessage * request));
IL2CPP_REGISTER_METHOD(0x0231F430, void, AttachIdentity, (RemotingProxy * __this, Identity * identity));
IL2CPP_REGISTER_METHOD(0x0231F830, IMessage *, ActivateRemoteObject, (RemotingProxy * __this, IMethodMessage * request));
IL2CPP_REGISTER_METHOD(0x0231FB20, String *, get_TypeName, (RemotingProxy * __this));
IL2CPP_REGISTER_METHOD(0x0231FC90, bool, CanCastTo, (RemotingProxy * __this, Type * fromType, Object * o));
IL2CPP_REGISTER_METHOD(0x0231FEA0, void, Finalize, (RemotingProxy * __this));
IL2CPP_REGISTER_METHOD(0x0231FFE0, void, __cctor, (MethodInfo * method));
}
