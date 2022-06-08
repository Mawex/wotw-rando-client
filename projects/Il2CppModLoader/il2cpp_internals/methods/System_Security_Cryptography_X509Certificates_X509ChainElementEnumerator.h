#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator {
IL2CPP_REGISTER_METHOD(0x021CE540, void, __ctor, (X509ChainElementEnumerator * __this, IEnumerable * enumerable));
IL2CPP_REGISTER_METHOD(0x021CE5E0, X509ChainElement *, get_Current, (X509ChainElementEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x021CE6D0, Object *, IEnumerator_get_Current, (X509ChainElementEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x021CE760, bool, MoveNext, (X509ChainElementEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x021CE7F0, void, Reset, (X509ChainElementEnumerator * __this));
}
