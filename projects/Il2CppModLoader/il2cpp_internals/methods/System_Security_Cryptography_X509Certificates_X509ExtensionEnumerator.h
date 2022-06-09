#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509ExtensionEnumerator {
IL2CPP_REGISTER_METHOD(0x0257B9A0, void, __ctor, (app::X509ExtensionEnumerator * this_ptr, app::ArrayList * list));
IL2CPP_REGISTER_METHOD(0x0257B9E0, X509Extension_1 *, get_Current, (app::X509ExtensionEnumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x0257BAD0, Object *, IEnumerator_get_Current, (app::X509ExtensionEnumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x0257BB60, bool, MoveNext, (app::X509ExtensionEnumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x0257BBF0, void, Reset, (app::X509ExtensionEnumerator * this_ptr));
}
