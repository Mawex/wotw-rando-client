#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::SignatureDescription {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SignatureDescription * __this));
IL2CPP_REGISTER_METHOD(0x01E0FB90, void, __ctor, (SignatureDescription * __this, SecurityElement * el));
IL2CPP_REGISTER_METHODINFO(0x0476AB78, SignatureDescription__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_KeyAlgorithm, (SignatureDescription * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_KeyAlgorithm, (SignatureDescription * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_DigestAlgorithm, (SignatureDescription * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_DigestAlgorithm, (SignatureDescription * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_FormatterAlgorithm, (SignatureDescription * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_FormatterAlgorithm, (SignatureDescription * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_DeformatterAlgorithm, (SignatureDescription * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_DeformatterAlgorithm, (SignatureDescription * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E0FCA0, AsymmetricSignatureDeformatter *, CreateDeformatter, (SignatureDescription * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHOD(0x01E0FDA0, AsymmetricSignatureFormatter *, CreateFormatter, (SignatureDescription * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHOD(0x01E0FEA0, HashAlgorithm *, CreateDigest, (SignatureDescription * __this));
}
