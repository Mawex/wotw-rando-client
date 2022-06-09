#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Activation::ActivationServices {
IL2CPP_REGISTER_METHOD(0x01A97860, IActivator *, get_ConstructionActivator, ());
IL2CPP_REGISTER_METHOD(0x01A979D0, IMessage *, Activate, (app::RemotingProxy * proxy, app::ConstructionCall * ctor_call));
IL2CPP_REGISTER_METHOD(0x01A97C00, IMessage *, RemoteActivate, (app::IConstructionCallMessage * ctor_call));
IL2CPP_REGISTER_METHOD(0x01A97DB0, ConstructionCall *, CreateConstructionCall, (app::Type * type, app::String * activation_url, app::Object__Array * activation_attributes));
IL2CPP_REGISTER_METHOD(0x01A98970, IMessage *, CreateInstanceFromMessage, (app::IConstructionCallMessage * ctor_call));
IL2CPP_REGISTER_METHOD(0x01A98A90, Object *, CreateProxyForType, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01A98CD0, Object *, AllocateUninitializedClassInstance, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01A98D10, void, EnableProxyActivation, (app::Type * type, bool enable));
}
