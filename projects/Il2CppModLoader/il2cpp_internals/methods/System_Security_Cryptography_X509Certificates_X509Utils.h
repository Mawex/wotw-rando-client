#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509Utils {
IL2CPP_REGISTER_METHOD(0x02580090, String *, FindOidInfo, (uint32_t key_type, app::String * key_value, app::OidGroup__Enum oid_group));
IL2CPP_REGISTER_METHODINFO(0x0471B638, X509Utils_FindOidInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025801E0, String *, FindOidInfoWithFallback, (uint32_t key, app::String * value, app::OidGroup__Enum group));
}
