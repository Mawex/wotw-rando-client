#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ConstructionCall {
IL2CPP_REGISTER_METHOD(0x0230EC20, void, __ctor, (ConstructionCall * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0230EC70, void, __ctor, (ConstructionCall * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0230ED20, void, InitDictionary, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsContextOk, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsContextOk, (ConstructionCall * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0230EF20, Type *, get_ActivationType, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_ActivationTypeName, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, IActivator *, get_Activator, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_Activator, (ConstructionCall * __this, IActivator * value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Object__Array *, get_CallSiteActivationAttributes, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, SetActivationAttributes, (ConstructionCall * __this, Object__Array * attributes));
IL2CPP_REGISTER_METHOD(0x0230F030, IList *, get_ContextProperties, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x0230F190, void, InitMethodProperty, (ConstructionCall * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x0230F400, void, GetObjectData, (ConstructionCall * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0230F550, IDictionary *, get_Properties, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, RemotingProxy *, get_SourceProxy, (ConstructionCall * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_SourceProxy, (ConstructionCall * __this, RemotingProxy * value));
}
