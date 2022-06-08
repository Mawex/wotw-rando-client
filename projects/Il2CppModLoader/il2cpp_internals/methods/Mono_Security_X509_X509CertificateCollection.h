#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X509CertificateCollection {
IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor, (X509CertificateCollection * __this));
IL2CPP_REGISTER_METHOD(0x022856E0, X509Certificate *, get_Item, (X509CertificateCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x022857E0, int32_t, Add, (X509CertificateCollection * __this, X509Certificate * value));
IL2CPP_REGISTER_METHODINFO(0x0474CF10, X509CertificateCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022858C0, X509CertificateCollection_X509CertificateEnumerator *, GetEnumerator, (X509CertificateCollection * __this));
IL2CPP_REGISTER_METHOD(0x020202A0, IEnumerator *, IEnumerable_GetEnumerator, (X509CertificateCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CBAD0, int32_t, GetHashCode, (X509CertificateCollection * __this));
IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor, (X509CertificateCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293F240, void, __ctor, (X509CertificateCollection_2 * __this, X509Certificate_2__Array * value));
IL2CPP_REGISTER_METHOD(0x0293F360, void, __ctor, (X509CertificateCollection_2 * __this, X509CertificateCollection_2 * value));
IL2CPP_REGISTER_METHOD(0x0293F390, X509Certificate_2 *, get_Item, (X509CertificateCollection_2 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0293F490, void, set_Item, (X509CertificateCollection_2 * __this, int32_t index, X509Certificate_2 * value));
IL2CPP_REGISTER_METHOD(0x0293F4E0, int32_t, Add, (X509CertificateCollection_2 * __this, X509Certificate_2 * value));
IL2CPP_REGISTER_METHODINFO(0x04798230, X509CertificateCollection_2_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293F5C0, void, AddRange, (X509CertificateCollection_2 * __this, X509Certificate_2__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0470AB20, X509CertificateCollection_2_AddRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293F6E0, void, AddRange, (X509CertificateCollection_2 * __this, X509CertificateCollection_2 * value));
IL2CPP_REGISTER_METHODINFO(0x0471A388, X509CertificateCollection_2_AddRange_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293F820, bool, Contains, (X509CertificateCollection_2 * __this, X509Certificate_2 * value));
IL2CPP_REGISTER_METHOD(0x0201F9A0, void, CopyTo, (X509CertificateCollection_2 * __this, X509Certificate_2__Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x0293F840, X509CertificateCollection_X509CertificateEnumerator_2 *, GetEnumerator, (X509CertificateCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x020202A0, IEnumerator *, IEnumerable_GetEnumerator, (X509CertificateCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x021CBAD0, int32_t, GetHashCode, (X509CertificateCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293FA00, int32_t, IndexOf, (X509CertificateCollection_2 * __this, X509Certificate_2 * value));
IL2CPP_REGISTER_METHODINFO(0x04738B58, X509CertificateCollection_2_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293FBF0, void, Insert, (X509CertificateCollection_2 * __this, int32_t index, X509Certificate_2 * value));
IL2CPP_REGISTER_METHOD(0x0293FC40, void, Remove, (X509CertificateCollection_2 * __this, X509Certificate_2 * value));
IL2CPP_REGISTER_METHOD(0x0293FC80, bool, Compare, (X509CertificateCollection_2 * __this, Byte__Array * array1, Byte__Array * array2));
}
