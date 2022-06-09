#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X509ExtensionCollection {
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor_1, (app::X509ExtensionCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022868F0, void, __ctor_2, (app::X509ExtensionCollection * this_ptr, app::ASN1 * asn1));
    IL2CPP_REGISTER_METHODINFO(0x04744D00, X509ExtensionCollection__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x020202A0, app::IEnumerator *, IEnumerable_GetEnumerator_1, (app::X509ExtensionCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor_3, (app::X509ExtensionCollection_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03166390, void, __ctor_4, (app::X509ExtensionCollection_1 * this_ptr, app::ASN1_1 * asn1));
    IL2CPP_REGISTER_METHODINFO(0x0475C660, X509ExtensionCollection_1__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03166610, int32_t, Add, (app::X509ExtensionCollection_1 * this_ptr, app::X509Extension_2 * extension));
    IL2CPP_REGISTER_METHODINFO(0x04700BF0, X509ExtensionCollection_1_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03166730, void, AddRange_1, (app::X509ExtensionCollection_1 * this_ptr, app::X509Extension_2__Array * extension));
    IL2CPP_REGISTER_METHODINFO(0x0474E9B0, X509ExtensionCollection_1_AddRange__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03166880, void, AddRange_2, (app::X509ExtensionCollection_1 * this_ptr, app::X509ExtensionCollection_1 * collection));
    IL2CPP_REGISTER_METHODINFO(0x04712A38, X509ExtensionCollection_1_AddRange_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03166AF0, bool, Contains_1, (app::X509ExtensionCollection_1 * this_ptr, app::X509Extension_2 * extension));
    IL2CPP_REGISTER_METHOD(0x03166B10, bool, Contains_2, (app::X509ExtensionCollection_1 * this_ptr, app::String * oid));
    IL2CPP_REGISTER_METHOD(0x03166B30, void, CopyTo, (app::X509ExtensionCollection_1 * this_ptr, app::X509Extension_2__Array * extensions, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x047017D8, X509ExtensionCollection_1_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03166C20, int32_t, IndexOf_1, (app::X509ExtensionCollection_1 * this_ptr, app::X509Extension_2 * extension));
    IL2CPP_REGISTER_METHODINFO(0x0472CE78, X509ExtensionCollection_1_IndexOf__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03166DD0, int32_t, IndexOf_2, (app::X509ExtensionCollection_1 * this_ptr, app::String * oid));
    IL2CPP_REGISTER_METHODINFO(0x047783A0, X509ExtensionCollection_1_IndexOf_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03166F70, void, Insert, (app::X509ExtensionCollection_1 * this_ptr, int32_t index, app::X509Extension_2 * extension));
    IL2CPP_REGISTER_METHODINFO(0x047560D0, X509ExtensionCollection_1_Insert__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03167060, void, Remove_1, (app::X509ExtensionCollection_1 * this_ptr, app::X509Extension_2 * extension));
    IL2CPP_REGISTER_METHODINFO(0x047943A0, X509ExtensionCollection_1_Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03167140, void, Remove_2, (app::X509ExtensionCollection_1 * this_ptr, app::String * oid));
    IL2CPP_REGISTER_METHODINFO(0x0475BA88, X509ExtensionCollection_1_Remove_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x020202A0, app::IEnumerator *, IEnumerable_GetEnumerator_2, (app::X509ExtensionCollection_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03167240, app::X509Extension_2 *, get_Item_1, (app::X509ExtensionCollection_1 * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x03167340, app::X509Extension_2 *, get_Item_2, (app::X509ExtensionCollection_1 * this_ptr, app::String * oid));
    IL2CPP_REGISTER_METHOD(0x03167470, app::Byte__Array *, GetBytes, (app::X509ExtensionCollection_1 * this_ptr));
}
