#include <interception_macros.h>

namespace app::methods::System::Security::Claims::ClaimsIdentity {
IL2CPP_REGISTER_METHOD(0x01E1C300, void, __ctor, (ClaimsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x020C1AE0, void, __ctor, (ClaimsIdentity * __this, IEnumerable_1_System_Security_Claims_Claim_ * claims));
IL2CPP_REGISTER_METHOD(0x020C1B10, void, __ctor, (ClaimsIdentity * __this, IIdentity * identity, IEnumerable_1_System_Security_Claims_Claim_ * claims, String * authenticationType, String * nameType, String * roleType));
IL2CPP_REGISTER_METHOD(0x020C1B40, void, __ctor, (ClaimsIdentity * __this, IIdentity * identity, IEnumerable_1_System_Security_Claims_Claim_ * claims, String * authenticationType, String * nameType, String * roleType, bool checkAuthType));
IL2CPP_REGISTER_METHODINFO(0x04783A38, ClaimsIdentity__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2310, void, __ctor, (ClaimsIdentity * __this, ClaimsIdentity * other));
IL2CPP_REGISTER_METHODINFO(0x04733000, ClaimsIdentity__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2680, void, __ctor, (ClaimsIdentity * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04768068, ClaimsIdentity__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_AuthenticationType, (ClaimsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, ClaimsIdentity *, get_Actor, (ClaimsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x020C2930, void, set_Actor, (ClaimsIdentity * __this, ClaimsIdentity * value));
IL2CPP_REGISTER_METHODINFO(0x0470A858, ClaimsIdentity_set_Actor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2A30, IEnumerable_1_System_Security_Claims_Claim_ *, get_Claims, (ClaimsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x020C2BC0, String *, get_Name, (ClaimsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_NameClaimType, (ClaimsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x020C2BF0, ClaimsIdentity *, Clone, (ClaimsIdentity * __this));
IL2CPP_REGISTER_METHODINFO(0x04760758, ClaimsIdentity_Clone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2E90, void, AddClaim, (ClaimsIdentity * __this, Claim * claim));
IL2CPP_REGISTER_METHODINFO(0x0471E780, ClaimsIdentity_AddClaim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C2FB0, void, SafeAddClaims, (ClaimsIdentity * __this, IEnumerable_1_System_Security_Claims_Claim_ * claims));
IL2CPP_REGISTER_METHOD(0x020C31E0, void, SafeAddClaim, (ClaimsIdentity * __this, Claim * claim));
IL2CPP_REGISTER_METHOD(0x020C32D0, Claim *, FindFirst, (ClaimsIdentity * __this, String * type));
IL2CPP_REGISTER_METHODINFO(0x04711788, ClaimsIdentity_FindFirst__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C35C0, void, OnSerializingMethod, (ClaimsIdentity * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C3670, void, OnDeserializedMethod, (ClaimsIdentity * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C3750, void, OnDeserializingMethod, (ClaimsIdentity * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C3990, void, GetObjectData, (ClaimsIdentity * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0477E7E0, ClaimsIdentity_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C4000, void, DeserializeClaims, (ClaimsIdentity * __this, String * serializedClaims));
IL2CPP_REGISTER_METHOD(0x020C44C0, String *, SerializeClaims, (ClaimsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x020C4810, bool, IsCircular, (ClaimsIdentity * __this, ClaimsIdentity * subject));
IL2CPP_REGISTER_METHOD(0x020C4860, void, Deserialize, (ClaimsIdentity * __this, SerializationInfo * info, StreamingContext context, bool useContext));
IL2CPP_REGISTER_METHODINFO(0x0479A290, ClaimsIdentity_Deserialize__MethodInfo);
}
