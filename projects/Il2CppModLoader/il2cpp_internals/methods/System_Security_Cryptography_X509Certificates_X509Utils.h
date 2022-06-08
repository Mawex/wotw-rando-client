#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Utils {
IL2CPP_REGISTER_METHOD(0x02580090, String *, FindOidInfo, (uint32_t keyType, String * keyValue, OidGroup__Enum oidGroup));
IL2CPP_REGISTER_METHODINFO(0x0471B638, X509Utils_FindOidInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025801E0, String *, FindOidInfoWithFallback, (uint32_t key, String * value, OidGroup__Enum group));
}
