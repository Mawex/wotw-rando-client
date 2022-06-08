#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X509Extension {
IL2CPP_REGISTER_METHOD(0x02285E50, void, __ctor, (X509Extension * __this, ASN1 * asn1));
IL2CPP_REGISTER_METHODINFO(0x04754058, X509Extension__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Decode, (X509Extension * __this));
IL2CPP_REGISTER_METHOD(0x02286270, bool, Equals, (X509Extension * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (X509Extension * __this));
IL2CPP_REGISTER_METHOD(0x02286460, void, WriteLine, (X509Extension * __this, StringBuilder * sb, int32_t n, int32_t pos));
IL2CPP_REGISTER_METHOD(0x022866E0, String *, ToString, (X509Extension * __this));
IL2CPP_REGISTER_METHOD(0x005C8740, void, __ctor, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x03165450, void, __ctor, (X509Extension_2 * __this, ASN1_1 * asn1));
IL2CPP_REGISTER_METHODINFO(0x04723A80, X509Extension_2__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03165870, void, __ctor, (X509Extension_2 * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHODINFO(0x04712218, X509Extension_2__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Decode, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Encode, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x03165A00, ASN1_1 *, get_ASN1, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Oid, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Critical, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_Critical, (X509Extension_2 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x03165CB0, ASN1_1 *, get_Value, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x03165CE0, bool, Equals, (X509Extension_2 * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x03165ED0, Byte__Array *, GetBytes, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (X509Extension_2 * __this));
IL2CPP_REGISTER_METHOD(0x03165F00, void, WriteLine, (X509Extension_2 * __this, StringBuilder * sb, int32_t n, int32_t pos));
IL2CPP_REGISTER_METHOD(0x03166180, String *, ToString, (X509Extension_2 * __this));
}
