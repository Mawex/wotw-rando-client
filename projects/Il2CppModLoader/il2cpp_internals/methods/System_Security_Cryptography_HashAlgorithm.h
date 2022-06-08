#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::HashAlgorithm {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_HashSize, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020DAAD0, Byte__Array *, get_Hash, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHODINFO(0x04786D30, HashAlgorithm_get_Hash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020DAC90, HashAlgorithm *, Create, ());
IL2CPP_REGISTER_METHOD(0x020DADD0, HashAlgorithm *, Create, (String * hashName));
IL2CPP_REGISTER_METHOD(0x020DAEB0, Byte__Array *, ComputeHash, (HashAlgorithm * __this, Stream * inputStream));
IL2CPP_REGISTER_METHODINFO(0x047045C0, HashAlgorithm_ComputeHash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020DB0D0, Byte__Array *, ComputeHash, (HashAlgorithm * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHODINFO(0x04752FF0, HashAlgorithm_ComputeHash_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020DB2E0, Byte__Array *, ComputeHash, (HashAlgorithm * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04775198, HashAlgorithm_ComputeHash_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_InputBlockSize, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_OutputBlockSize, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020DB5B0, int32_t, TransformBlock, (HashAlgorithm * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHODINFO(0x04787668, HashAlgorithm_TransformBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020DB800, Byte__Array *, TransformFinalBlock, (HashAlgorithm * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x04745838, HashAlgorithm_TransformFinalBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020DBA90, void, Dispose, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020DBB40, void, Clear, (HashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020DBBD0, void, Dispose, (HashAlgorithm * __this, bool disposing));
}
