#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X509CertificateCollection {
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor_1, (app::X509CertificateCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022856E0, app::X509Certificate *, get_Item_1, (app::X509CertificateCollection * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x022857E0, int32_t, Add_1, (app::X509CertificateCollection * this_ptr, app::X509Certificate * value));
    IL2CPP_REGISTER_METHODINFO(0x0474CF10, X509CertificateCollection_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022858C0, app::X509CertificateCollection_X509CertificateEnumerator *, GetEnumerator_1, (app::X509CertificateCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020202A0, app::IEnumerator *, IEnumerable_GetEnumerator_1, (app::X509CertificateCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021CBAD0, int32_t, GetHashCode_1, (app::X509CertificateCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor_2, (app::X509CertificateCollection_2 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0293F240, void, __ctor_3, (app::X509CertificateCollection_2 * this_ptr, app::X509Certificate_2__Array * value));
    IL2CPP_REGISTER_METHOD(0x0293F360, void, __ctor_4, (app::X509CertificateCollection_2 * this_ptr, app::X509CertificateCollection_2 * value));
    IL2CPP_REGISTER_METHOD(0x0293F390, app::X509Certificate_2 *, get_Item_2, (app::X509CertificateCollection_2 * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x0293F490, void, set_Item, (app::X509CertificateCollection_2 * this_ptr, int32_t index, app::X509Certificate_2 * value));
    IL2CPP_REGISTER_METHOD(0x0293F4E0, int32_t, Add_2, (app::X509CertificateCollection_2 * this_ptr, app::X509Certificate_2 * value));
    IL2CPP_REGISTER_METHODINFO(0x04798230, X509CertificateCollection_2_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0293F5C0, void, AddRange_1, (app::X509CertificateCollection_2 * this_ptr, app::X509Certificate_2__Array * value));
    IL2CPP_REGISTER_METHODINFO(0x0470AB20, X509CertificateCollection_2_AddRange__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0293F6E0, void, AddRange_2, (app::X509CertificateCollection_2 * this_ptr, app::X509CertificateCollection_2 * value));
    IL2CPP_REGISTER_METHODINFO(0x0471A388, X509CertificateCollection_2_AddRange_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0293F820, bool, Contains, (app::X509CertificateCollection_2 * this_ptr, app::X509Certificate_2 * value));
    IL2CPP_REGISTER_METHOD(0x0201F9A0, void, CopyTo, (app::X509CertificateCollection_2 * this_ptr, app::X509Certificate_2__Array * array, int32_t index));
    IL2CPP_REGISTER_METHOD(0x0293F840, app::X509CertificateCollection_X509CertificateEnumerator_2 *, GetEnumerator_2, (app::X509CertificateCollection_2 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020202A0, app::IEnumerator *, IEnumerable_GetEnumerator_2, (app::X509CertificateCollection_2 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021CBAD0, int32_t, GetHashCode_2, (app::X509CertificateCollection_2 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0293FA00, int32_t, IndexOf, (app::X509CertificateCollection_2 * this_ptr, app::X509Certificate_2 * value));
    IL2CPP_REGISTER_METHODINFO(0x04738B58, X509CertificateCollection_2_IndexOf__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0293FBF0, void, Insert, (app::X509CertificateCollection_2 * this_ptr, int32_t index, app::X509Certificate_2 * value));
    IL2CPP_REGISTER_METHOD(0x0293FC40, void, Remove, (app::X509CertificateCollection_2 * this_ptr, app::X509Certificate_2 * value));
    IL2CPP_REGISTER_METHOD(0x0293FC80, bool, Compare, (app::X509CertificateCollection_2 * this_ptr, app::Byte__Array * array1, app::Byte__Array * array2));
}
