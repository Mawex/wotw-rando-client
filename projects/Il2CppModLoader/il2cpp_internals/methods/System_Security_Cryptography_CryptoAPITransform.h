#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::CryptoAPITransform {
IL2CPP_REGISTER_METHOD(0x00531660, void, __ctor, (CryptoAPITransform * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (CryptoAPITransform * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, (CryptoAPITransform * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_InputBlockSize, (CryptoAPITransform * __this));
IL2CPP_REGISTER_METHOD(0x020C90C0, void *, get_KeyHandle, (CryptoAPITransform * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_OutputBlockSize, (CryptoAPITransform * __this));
IL2CPP_REGISTER_METHOD(0x020C9130, void, Dispose, (CryptoAPITransform * __this));
IL2CPP_REGISTER_METHOD(0x020C91E0, void, Clear, (CryptoAPITransform * __this));
IL2CPP_REGISTER_METHOD(0x020C91E0, void, Dispose, (CryptoAPITransform * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, TransformBlock, (CryptoAPITransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHOD(0x00420EE0, Byte__Array *, TransformFinalBlock, (CryptoAPITransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (CryptoAPITransform * __this));
}
