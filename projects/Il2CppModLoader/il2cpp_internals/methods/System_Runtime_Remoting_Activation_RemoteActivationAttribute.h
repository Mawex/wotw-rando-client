#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Activation::RemoteActivationAttribute {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RemoteActivationAttribute * __this, IList * contextProperties));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsContextOK, (RemoteActivationAttribute * __this, Context * ctx, IConstructionCallMessage * ctor));
IL2CPP_REGISTER_METHOD(0x01A99390, void, GetPropertiesForNewContext, (RemoteActivationAttribute * __this, IConstructionCallMessage * ctor));
}
