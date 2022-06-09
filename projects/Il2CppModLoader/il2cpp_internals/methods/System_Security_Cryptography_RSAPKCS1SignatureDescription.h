#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::RSAPKCS1SignatureDescription {
IL2CPP_REGISTER_METHOD(0x028ED5C0, void, __ctor, (app::RSAPKCS1SignatureDescription * this_ptr, app::String * hash_algorithm, app::String * digest_algorithm));
IL2CPP_REGISTER_METHOD(0x028ED670, AsymmetricSignatureDeformatter *, CreateDeformatter, (app::RSAPKCS1SignatureDescription * this_ptr, app::AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHOD(0x028ED790, AsymmetricSignatureFormatter *, CreateFormatter, (app::RSAPKCS1SignatureDescription * this_ptr, app::AsymmetricAlgorithm * key));
}
