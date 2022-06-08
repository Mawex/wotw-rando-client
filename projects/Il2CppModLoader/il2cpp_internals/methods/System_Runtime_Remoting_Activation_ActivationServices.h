#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Activation::ActivationServices {
IL2CPP_REGISTER_METHOD(0x01A97860, IActivator *, get_ConstructionActivator, ());
IL2CPP_REGISTER_METHOD(0x01A979D0, IMessage *, Activate, (RemotingProxy * proxy, ConstructionCall * ctorCall));
IL2CPP_REGISTER_METHOD(0x01A97C00, IMessage *, RemoteActivate, (IConstructionCallMessage * ctorCall));
IL2CPP_REGISTER_METHOD(0x01A97DB0, ConstructionCall *, CreateConstructionCall, (Type * type, String * activationUrl, Object__Array * activationAttributes));
IL2CPP_REGISTER_METHOD(0x01A98970, IMessage *, CreateInstanceFromMessage, (IConstructionCallMessage * ctorCall));
IL2CPP_REGISTER_METHOD(0x01A98A90, Object *, CreateProxyForType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01A98CD0, Object *, AllocateUninitializedClassInstance, (Type * type));
IL2CPP_REGISTER_METHOD(0x01A98D10, void, EnableProxyActivation, (Type * type, bool enable));
}
