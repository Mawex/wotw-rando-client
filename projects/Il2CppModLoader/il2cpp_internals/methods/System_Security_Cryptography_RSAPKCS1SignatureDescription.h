using namespace app;

namespace app::methods::System::Security::Cryptography::RSAPKCS1SignatureDescription {
IL2CPP_REGISTER_METHOD(0x028ED5C0, void, __ctor, (RSAPKCS1SignatureDescription * __this, String * hashAlgorithm, String * digestAlgorithm));
IL2CPP_REGISTER_METHOD(0x028ED670, AsymmetricSignatureDeformatter *, CreateDeformatter, (RSAPKCS1SignatureDescription * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHOD(0x028ED790, AsymmetricSignatureFormatter *, CreateFormatter, (RSAPKCS1SignatureDescription * __this, AsymmetricAlgorithm * key));
}
