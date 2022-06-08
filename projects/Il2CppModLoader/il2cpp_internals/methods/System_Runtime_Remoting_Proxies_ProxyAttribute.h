using namespace app;

namespace app::methods::System::Runtime::Remoting::Proxies::ProxyAttribute {
IL2CPP_REGISTER_METHOD(0x0231D270, MarshalByRefObject *, CreateInstance, (ProxyAttribute * __this, Type * serverType));
IL2CPP_REGISTER_METHOD(0x0231D470, RealProxy *, CreateProxy, (ProxyAttribute * __this, ObjRef * objRef, Type * serverType, Object * serverObject, Context * serverContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GetPropertiesForNewContext, (ProxyAttribute * __this, IConstructionCallMessage * msg));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsContextOK, (ProxyAttribute * __this, Context * ctx, IConstructionCallMessage * msg));
}
