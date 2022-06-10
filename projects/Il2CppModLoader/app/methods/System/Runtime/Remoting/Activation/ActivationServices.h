#pragma once
#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Activation::ActivationServices {
    IL2CPP_REGISTER_METHOD(0x01A97860, app::IActivator *, get_ConstructionActivator, ())
    IL2CPP_REGISTER_METHOD(0x01A979D0, app::IMessage *, Activate, (app::RemotingProxy * proxy, app::ConstructionCall * ctor_call))
    IL2CPP_REGISTER_METHOD(0x01A97C00, app::IMessage *, RemoteActivate, (app::IConstructionCallMessage * ctor_call))
    IL2CPP_REGISTER_METHOD(0x01A97DB0, app::ConstructionCall *, CreateConstructionCall, (app::Type * type, app::String * activation_url, app::Object__Array * activation_attributes))
    IL2CPP_REGISTER_METHOD(0x01A98970, app::IMessage *, CreateInstanceFromMessage, (app::IConstructionCallMessage * ctor_call))
    IL2CPP_REGISTER_METHOD(0x01A98A90, app::Object *, CreateProxyForType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01A98CD0, app::Object *, AllocateUninitializedClassInstance, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01A98D10, void, EnableProxyActivation, (app::Type * type, bool enable))
}
