#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Activation::ContextLevelActivator {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::ContextLevelActivator * this_ptr, app::IActivator * next));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IActivator *, get_NextActivator, (app::ContextLevelActivator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A99200, app::IConstructionReturnMessage *, Activate, (app::ContextLevelActivator * this_ptr, app::IConstructionCallMessage * ctor_call));
}
