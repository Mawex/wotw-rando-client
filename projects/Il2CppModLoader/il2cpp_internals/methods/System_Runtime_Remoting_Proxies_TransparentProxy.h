using namespace app;

namespace app::methods::System::Runtime::Remoting::Proxies::TransparentProxy {
IL2CPP_REGISTER_METHOD(0x023200F0, RuntimeType *, GetProxyType, (TransparentProxy * __this));
IL2CPP_REGISTER_METHOD(0x02320200, bool, get_IsContextBoundObject, (TransparentProxy * __this));
IL2CPP_REGISTER_METHOD(0x004173F0, Context *, get_TargetContext, (TransparentProxy * __this));
IL2CPP_REGISTER_METHOD(0x02320320, bool, InCurrentContext, (TransparentProxy * __this));
IL2CPP_REGISTER_METHOD(0x023204A0, Object *, LoadRemoteFieldNew, (TransparentProxy * __this, void * classPtr, void * fieldPtr));
IL2CPP_REGISTER_METHODINFO(0x0478C860, TransparentProxy_LoadRemoteFieldNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02320900, void, StoreRemoteField, (TransparentProxy * __this, void * classPtr, void * fieldPtr, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04746198, TransparentProxy_StoreRemoteField__MethodInfo);
}
