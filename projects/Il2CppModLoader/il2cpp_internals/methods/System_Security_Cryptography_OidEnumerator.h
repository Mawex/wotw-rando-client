#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::OidEnumerator {
IL2CPP_REGISTER_METHOD(0x021C1000, void, __ctor, (OidEnumerator * __this, OidCollection * oids));
IL2CPP_REGISTER_METHOD(0x021C1010, Object *, IEnumerator_get_Current, (OidEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x021C1040, bool, MoveNext, (OidEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (OidEnumerator * __this));
}
