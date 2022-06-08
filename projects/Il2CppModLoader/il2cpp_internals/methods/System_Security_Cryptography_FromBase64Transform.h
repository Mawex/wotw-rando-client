#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::FromBase64Transform {
IL2CPP_REGISTER_METHOD(0x020D7E70, void, __ctor, (FromBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x020D7F10, void, __ctor, (FromBase64Transform * __this, FromBase64TransformMode__Enum whitespaces));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_InputBlockSize, (FromBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_OutputBlockSize, (FromBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanTransformMultipleBlocks, (FromBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (FromBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x020D7FB0, int32_t, TransformBlock, (FromBase64Transform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHODINFO(0x04709750, FromBase64Transform_TransformBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D8380, Byte__Array *, TransformFinalBlock, (FromBase64Transform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x04760FD8, FromBase64Transform_TransformFinalBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D8730, Byte__Array *, DiscardWhiteSpaces, (FromBase64Transform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x020D8950, void, Dispose, (FromBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x008001B0, void, Reset, (FromBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x020D8950, void, Clear, (FromBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x020D8A00, void, Dispose, (FromBase64Transform * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020D8A40, void, Finalize, (FromBase64Transform * __this));
}
