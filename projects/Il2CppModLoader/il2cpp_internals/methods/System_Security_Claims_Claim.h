using namespace app;

namespace app::methods::System::Security::Claims::Claim {
IL2CPP_REGISTER_METHOD(0x020C0D40, void, __ctor, (Claim * __this, String * type, String * value, String * valueType, String * issuer, String * originalIssuer, ClaimsIdentity * subject));
IL2CPP_REGISTER_METHOD(0x020C0D90, void, __ctor, (Claim * __this, String * type, String * value, String * valueType, String * issuer, String * originalIssuer, ClaimsIdentity * subject, String * propertyKey, String * propertyValue));
IL2CPP_REGISTER_METHODINFO(0x04713008, Claim__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C1010, void, __ctor, (Claim * __this, Claim * other, ClaimsIdentity * subject));
IL2CPP_REGISTER_METHODINFO(0x04748380, Claim__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C14E0, void, OnDeserializedMethod, (Claim * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x020C1620, IDictionary_2_System_String_System_String_ *, get_Properties, (Claim * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, ClaimsIdentity *, get_Subject, (Claim * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Subject, (Claim * __this, ClaimsIdentity * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Type, (Claim * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Value, (Claim * __this));
IL2CPP_REGISTER_METHOD(0x020C1880, Claim *, Clone, (Claim * __this, ClaimsIdentity * identity));
IL2CPP_REGISTER_METHOD(0x020C19E0, String *, ToString, (Claim * __this));
}
