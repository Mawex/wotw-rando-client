#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::ObjRef {
IL2CPP_REGISTER_METHOD(0x0231B8D0, void, __ctor, (ObjRef * __this));
IL2CPP_REGISTER_METHOD(0x0231B8E0, void, __ctor, (ObjRef * __this, String * uri, IChannelInfo * cinfo));
IL2CPP_REGISTER_METHOD(0x0231B8F0, ObjRef *, DeserializeInTheCurrentDomain, (ObjRef * __this, int32_t domainId, Byte__Array * tInfo));
IL2CPP_REGISTER_METHOD(0x0231BC30, Byte__Array *, SerializeType, (ObjRef * __this));
IL2CPP_REGISTER_METHODINFO(0x0470DA78, ObjRef_SerializeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0231BD00, void, __ctor, (ObjRef * __this, Type * type, String * url, Object * remoteChannelData));
IL2CPP_REGISTER_METHOD(0x0231BF70, void, __ctor, (ObjRef * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0477BE00, ObjRef__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0231C3A0, bool, get_IsReferenceToWellKnow, (ObjRef * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IChannelInfo *, get_ChannelInfo, (ObjRef * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, IEnvoyInfo *, get_EnvoyInfo, (ObjRef * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_EnvoyInfo, (ObjRef * __this, IEnvoyInfo * value));
IL2CPP_REGISTER_METHOD(0x002FB950, IRemotingTypeInfo *, get_TypeInfo, (ObjRef * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_TypeInfo, (ObjRef * __this, IRemotingTypeInfo * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_URI, (ObjRef * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_URI, (ObjRef * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0231C450, void, GetObjectData, (ObjRef * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0231C5F0, Object *, GetRealObject, (ObjRef * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0231C6E0, void, UpdateChannelInfo, (ObjRef * __this));
IL2CPP_REGISTER_METHOD(0x0231C8A0, Type *, get_ServerType, (ObjRef * __this));
IL2CPP_REGISTER_METHOD(0x0231C9B0, void, __cctor, ());
}
