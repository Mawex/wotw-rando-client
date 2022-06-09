#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::RSAPKCS1SignatureFormatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::RSAPKCS1SignatureFormatter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F76900, void, __ctor_2, (app::RSAPKCS1SignatureFormatter * this_ptr, app::AsymmetricAlgorithm * key));
    IL2CPP_REGISTER_METHOD(0x028ED8B0, app::Byte__Array *, CreateSignature, (app::RSAPKCS1SignatureFormatter * this_ptr, app::Byte__Array * rgb_hash));
    IL2CPP_REGISTER_METHODINFO(0x047710E8, RSAPKCS1SignatureFormatter_CreateSignature__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x028EDA30, void, SetHashAlgorithm, (app::RSAPKCS1SignatureFormatter * this_ptr, app::String * str_name));
    IL2CPP_REGISTER_METHODINFO(0x0472F228, RSAPKCS1SignatureFormatter_SetHashAlgorithm__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x028EDAF0, void, SetKey, (app::RSAPKCS1SignatureFormatter * this_ptr, app::AsymmetricAlgorithm * key));
    IL2CPP_REGISTER_METHODINFO(0x047944D0, RSAPKCS1SignatureFormatter_SetKey__MethodInfo);
}
