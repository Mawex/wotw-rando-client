using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509ExtensionCollection {
IL2CPP_REGISTER_METHOD(0x021D5A60, void, __ctor, (X509ExtensionCollection_2 * __this, X509Certificate_2 * cert));
IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (X509ExtensionCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x021CDDE0, bool, get_IsSynchronized, (X509ExtensionCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (X509ExtensionCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x021D66D0, X509Extension_1 *, get_Item, (X509ExtensionCollection_2 * __this, String * oid));
IL2CPP_REGISTER_METHODINFO(0x0473DC98, X509ExtensionCollection_2_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D6950, void, ICollection_CopyTo, (X509ExtensionCollection_2 * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047771D0, X509ExtensionCollection_2_System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D6AB0, X509ExtensionEnumerator *, GetEnumerator, (X509ExtensionCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x021D6C20, IEnumerator *, IEnumerable_GetEnumerator, (X509ExtensionCollection_2 * __this));
IL2CPP_REGISTER_METHOD(0x021D6D90, void, __cctor, (MethodInfo * method));
}
