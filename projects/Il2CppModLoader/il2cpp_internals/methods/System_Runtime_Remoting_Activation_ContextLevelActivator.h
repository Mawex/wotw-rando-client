using namespace app;

namespace app::methods::System::Runtime::Remoting::Activation::ContextLevelActivator {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ContextLevelActivator * __this, IActivator * next));
IL2CPP_REGISTER_METHOD(0x002FA280, IActivator *, get_NextActivator, (ContextLevelActivator * __this));
IL2CPP_REGISTER_METHOD(0x01A99200, IConstructionReturnMessage *, Activate, (ContextLevelActivator * __this, IConstructionCallMessage * ctorCall));
}
