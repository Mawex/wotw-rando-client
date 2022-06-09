#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::CAPI {
IL2CPP_REGISTER_METHOD(0x021BF060, String *, CryptFindOIDInfoNameFromKey, (app::String * key, app::OidGroup__Enum oid_group));
IL2CPP_REGISTER_METHOD(0x021BFCA0, String *, CryptFindOIDInfoKeyFromName, (app::String * name, app::OidGroup__Enum oid_group));
}
