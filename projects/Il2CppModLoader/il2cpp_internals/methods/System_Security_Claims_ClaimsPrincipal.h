#include <interception_macros.h>

namespace app::methods::System::Security::Claims::ClaimsPrincipal {
IL2CPP_REGISTER_METHOD(0x020C58A0, ClaimsIdentity *, SelectPrimaryIdentity, (IEnumerable_1_System_Security_Claims_ClaimsIdentity_ * identities));
IL2CPP_REGISTER_METHODINFO(0x04712EF8, ClaimsPrincipal_SelectPrimaryIdentity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C5B20, Func_1_System_Security_Claims_ClaimsPrincipal_ *, get_ClaimsPrincipalSelector, ());
IL2CPP_REGISTER_METHOD(0x020C5BC0, void, __ctor, (ClaimsPrincipal * __this));
IL2CPP_REGISTER_METHOD(0x020C5D20, void, __ctor, (ClaimsPrincipal * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04773A30, ClaimsPrincipal__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C5EE0, void, OnSerializingMethod, (ClaimsPrincipal * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C5F80, void, OnDeserializedMethod, (ClaimsPrincipal * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C6030, void, Deserialize, (ClaimsPrincipal * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0473B178, ClaimsPrincipal_Deserialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C6230, void, DeserializeIdentities, (ClaimsPrincipal * __this, String * identities));
IL2CPP_REGISTER_METHODINFO(0x0477FF98, ClaimsPrincipal_DeserializeIdentities__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C6A70, String *, SerializeIdentities, (ClaimsPrincipal * __this));
IL2CPP_REGISTER_METHOD(0x020C74B0, void, __cctor, ());
}
