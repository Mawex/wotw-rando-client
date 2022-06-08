#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::ToBase64Transform {
IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_InputBlockSize, (ToBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_OutputBlockSize, (ToBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanTransformMultipleBlocks, (ToBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (ToBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x01E11A10, int32_t, TransformBlock, (ToBase64Transform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHODINFO(0x047502A8, ToBase64Transform_TransformBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E11CC0, Byte__Array *, TransformFinalBlock, (ToBase64Transform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x0473EE10, ToBase64Transform_TransformFinalBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E11F30, void, Dispose, (ToBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x01E11F30, void, Clear, (ToBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (ToBase64Transform * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01E11FE0, void, Finalize, (ToBase64Transform * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ToBase64Transform * __this));
}
