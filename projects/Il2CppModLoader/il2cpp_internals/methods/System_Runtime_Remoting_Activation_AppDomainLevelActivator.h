using namespace app;

namespace app::methods::System::Runtime::Remoting::Activation::AppDomainLevelActivator {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (AppDomainLevelActivator * __this, String * activationUrl, IActivator * next));
IL2CPP_REGISTER_METHOD(0x002FB930, IActivator *, get_NextActivator, (AppDomainLevelActivator * __this));
IL2CPP_REGISTER_METHOD(0x01A98D20, IConstructionReturnMessage *, Activate, (AppDomainLevelActivator * __this, IConstructionCallMessage * ctorCall));
IL2CPP_REGISTER_METHODINFO(0x04714470, AppDomainLevelActivator_Activate__MethodInfo);
}
