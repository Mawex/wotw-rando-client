using namespace app;

namespace app::methods::System::Security::Principal::GenericIdentity {
IL2CPP_REGISTER_METHOD(0x01E1C1C0, void, __ctor, (GenericIdentity * __this, String * name, String * type));
IL2CPP_REGISTER_METHODINFO(0x04768330, GenericIdentity__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1C300, void, __ctor, (GenericIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01E1C330, void, __ctor, (GenericIdentity * __this, GenericIdentity * identity));
IL2CPP_REGISTER_METHOD(0x01E1C380, ClaimsIdentity *, Clone, (GenericIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01E1C4F0, IEnumerable_1_System_Security_Claims_Claim_ *, get_Claims, (GenericIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_Name, (GenericIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, String *, get_AuthenticationType, (GenericIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01E1C500, void, OnDeserializedMethod, (GenericIdentity * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01E1C6B0, void, AddNameClaim, (GenericIdentity * __this));
}
