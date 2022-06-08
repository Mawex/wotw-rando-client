using namespace app;

namespace app::methods::System::Security::Cryptography::OidCollection {
IL2CPP_REGISTER_METHOD(0x021C0A10, void, __ctor, (OidCollection * __this));
IL2CPP_REGISTER_METHOD(0x021C0B60, int32_t, Add, (OidCollection * __this, Oid * oid));
IL2CPP_REGISTER_METHOD(0x021C0B90, Oid *, get_Item, (OidCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (OidCollection * __this));
IL2CPP_REGISTER_METHOD(0x021C0C50, IEnumerator *, IEnumerable_GetEnumerator, (OidCollection * __this));
IL2CPP_REGISTER_METHOD(0x021C0DA0, void, ICollection_CopyTo, (OidCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0474EBC8, OidCollection_System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (OidCollection * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (OidCollection * __this));
}
