#include <interception_macros.h>

namespace app::methods::System::Net::CredentialCache_CredentialEnumerator {
IL2CPP_REGISTER_METHOD(0x01EAAF30, void, __ctor, (CredentialCache_CredentialEnumerator * __this, CredentialCache * cache, Hashtable * table, Hashtable * hostTable, int32_t version));
IL2CPP_REGISTER_METHOD(0x01EAB0C0, Object *, IEnumerator_get_Current, (CredentialCache_CredentialEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x047739D8, CredentialCache_CredentialEnumerator_System_Collections_IEnumerator_get_Current__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EAB220, bool, IEnumerator_MoveNext, (CredentialCache_CredentialEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A708, CredentialCache_CredentialEnumerator_System_Collections_IEnumerator_MoveNext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00443280, void, IEnumerator_Reset, (CredentialCache_CredentialEnumerator * __this));
}
