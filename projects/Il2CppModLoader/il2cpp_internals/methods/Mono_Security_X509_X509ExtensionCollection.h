using namespace app;

namespace app::methods::Mono::Security::X509::X509ExtensionCollection {
IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor, (X509ExtensionCollection * __this));
IL2CPP_REGISTER_METHOD(0x022868F0, void, __ctor, (X509ExtensionCollection * __this, ASN1 * asn1));
IL2CPP_REGISTER_METHODINFO(0x04744D00, X509ExtensionCollection__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020202A0, IEnumerator *, IEnumerable_GetEnumerator, (X509ExtensionCollection * __this));
IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor, (X509ExtensionCollection_1 * __this));
IL2CPP_REGISTER_METHOD(0x03166390, void, __ctor, (X509ExtensionCollection_1 * __this, ASN1_1 * asn1));
IL2CPP_REGISTER_METHODINFO(0x0475C660, X509ExtensionCollection_1__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03166610, int32_t, Add, (X509ExtensionCollection_1 * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHODINFO(0x04700BF0, X509ExtensionCollection_1_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03166730, void, AddRange, (X509ExtensionCollection_1 * __this, X509Extension_2__Array * extension));
IL2CPP_REGISTER_METHODINFO(0x0474E9B0, X509ExtensionCollection_1_AddRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03166880, void, AddRange, (X509ExtensionCollection_1 * __this, X509ExtensionCollection_1 * collection));
IL2CPP_REGISTER_METHODINFO(0x04712A38, X509ExtensionCollection_1_AddRange_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03166AF0, bool, Contains, (X509ExtensionCollection_1 * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x03166B10, bool, Contains, (X509ExtensionCollection_1 * __this, String * oid));
IL2CPP_REGISTER_METHOD(0x03166B30, void, CopyTo, (X509ExtensionCollection_1 * __this, X509Extension_2__Array * extensions, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047017D8, X509ExtensionCollection_1_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03166C20, int32_t, IndexOf, (X509ExtensionCollection_1 * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHODINFO(0x0472CE78, X509ExtensionCollection_1_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03166DD0, int32_t, IndexOf, (X509ExtensionCollection_1 * __this, String * oid));
IL2CPP_REGISTER_METHODINFO(0x047783A0, X509ExtensionCollection_1_IndexOf_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03166F70, void, Insert, (X509ExtensionCollection_1 * __this, int32_t index, X509Extension_2 * extension));
IL2CPP_REGISTER_METHODINFO(0x047560D0, X509ExtensionCollection_1_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03167060, void, Remove, (X509ExtensionCollection_1 * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHODINFO(0x047943A0, X509ExtensionCollection_1_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03167140, void, Remove, (X509ExtensionCollection_1 * __this, String * oid));
IL2CPP_REGISTER_METHODINFO(0x0475BA88, X509ExtensionCollection_1_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020202A0, IEnumerator *, IEnumerable_GetEnumerator, (X509ExtensionCollection_1 * __this));
IL2CPP_REGISTER_METHOD(0x03167240, X509Extension_2 *, get_Item, (X509ExtensionCollection_1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x03167340, X509Extension_2 *, get_Item, (X509ExtensionCollection_1 * __this, String * oid));
IL2CPP_REGISTER_METHOD(0x03167470, Byte__Array *, GetBytes, (X509ExtensionCollection_1 * __this));
}
