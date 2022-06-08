using namespace app;

namespace app::methods::System::Runtime::Remoting::Proxies::RealProxy {
IL2CPP_REGISTER_METHOD(0x0231D520, void, __ctor, (RealProxy * __this, Type * classToProxy));
IL2CPP_REGISTER_METHOD(0x0231D5C0, void, __ctor, (RealProxy * __this, Type * classToProxy, ClientIdentity * identity));
IL2CPP_REGISTER_METHOD(0x0231D670, void, __ctor, (RealProxy * __this, Type * classToProxy, void * stub, Object * stubData));
IL2CPP_REGISTER_METHODINFO(0x04746700, RealProxy__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0231D7A0, Type *, InternalGetProxyType, (Object * transparentProxy));
IL2CPP_REGISTER_METHOD(0x0231D7B0, Type *, GetProxiedType, (RealProxy * __this));
IL2CPP_REGISTER_METHOD(0x0231D890, void, GetObjectData, (RealProxy * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Identity *, get_ObjectIdentity, (RealProxy * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ObjectIdentity, (RealProxy * __this, Identity * value));
IL2CPP_REGISTER_METHOD(0x0231D960, Object *, PrivateInvoke, (RealProxy * rp, IMessage * msg, Exception * * exc, Object__Array * * out_args));
IL2CPP_REGISTER_METHODINFO(0x047450E0, RealProxy_PrivateInvoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0231E3C0, Object *, InternalGetTransparentProxy, (RealProxy * __this, String * className));
IL2CPP_REGISTER_METHOD(0x0231E3D0, Object *, GetTransparentProxy, (RealProxy * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, AttachServer, (RealProxy * __this, MarshalByRefObject * s));
IL2CPP_REGISTER_METHOD(0x002FB980, void, SetTargetDomain, (RealProxy * __this, int32_t domainId));
IL2CPP_REGISTER_METHOD(0x0231E550, Object *, GetAppDomainTarget, (RealProxy * __this));
IL2CPP_REGISTER_METHODINFO(0x047086F8, RealProxy_GetAppDomainTarget__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0231E6A0, Object__Array *, ProcessResponse, (IMethodReturnMessage * mrm, MonoMethodMessage * call));
IL2CPP_REGISTER_METHODINFO(0x0475DB20, RealProxy_ProcessResponse__MethodInfo);
}
