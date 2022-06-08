using namespace app;

namespace app::methods::System::Security::Cryptography::RijndaelManagedTransform {
IL2CPP_REGISTER_METHOD(0x028F0620, void, __ctor, (RijndaelManagedTransform * __this, Byte__Array * rgbKey, CipherMode__Enum mode, Byte__Array * rgbIV, int32_t blockSize, int32_t feedbackSize, PaddingMode__Enum PaddingValue, RijndaelManagedTransformMode__Enum transformMode));
IL2CPP_REGISTER_METHODINFO(0x0475F858, RijndaelManagedTransform__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F0D10, void, Dispose, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHOD(0x028F0D10, void, Clear, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHOD(0x028F0D20, void, Dispose, (RijndaelManagedTransform * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_BlockSizeValue, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_InputBlockSize, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_OutputBlockSize, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHOD(0x028F0DF0, int32_t, TransformBlock, (RijndaelManagedTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHODINFO(0x04786C88, RijndaelManagedTransform_TransformBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F1190, Byte__Array *, TransformFinalBlock, (RijndaelManagedTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x04726C60, RijndaelManagedTransform_TransformFinalBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F14D0, void, Reset, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHOD(0x028F1540, int32_t, EncryptData, (RijndaelManagedTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * * outputBuffer, int32_t outputOffset, PaddingMode__Enum paddingMode, bool fLast));
IL2CPP_REGISTER_METHODINFO(0x0474B738, RijndaelManagedTransform_EncryptData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F2460, int32_t, DecryptData, (RijndaelManagedTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * * outputBuffer, int32_t outputOffset, PaddingMode__Enum paddingMode, bool fLast));
IL2CPP_REGISTER_METHODINFO(0x0470D270, RijndaelManagedTransform_DecryptData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F3490, void, Enc, (RijndaelManagedTransform * __this, int32_t * encryptindex, int32_t * encryptKeyExpansion, int32_t * T, int32_t * TF, int32_t * work, int32_t * temp));
IL2CPP_REGISTER_METHOD(0x028F3690, void, Dec, (RijndaelManagedTransform * __this, int32_t * decryptindex, int32_t * decryptKeyExpansion, int32_t * iT, int32_t * iTF, int32_t * work, int32_t * temp));
IL2CPP_REGISTER_METHOD(0x028F38D0, void, GenerateKeyExpansion, (RijndaelManagedTransform * __this, Byte__Array * rgbKey));
IL2CPP_REGISTER_METHODINFO(0x0471E518, RijndaelManagedTransform_GenerateKeyExpansion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F4090, int32_t, rot1, (int32_t val));
IL2CPP_REGISTER_METHOD(0x028F40A0, int32_t, rot2, (int32_t val));
IL2CPP_REGISTER_METHOD(0x028F40B0, int32_t, rot3, (int32_t val));
IL2CPP_REGISTER_METHOD(0x028F40C0, int32_t, SubWord, (int32_t a));
IL2CPP_REGISTER_METHOD(0x028F4250, int32_t, MulX, (int32_t x));
IL2CPP_REGISTER_METHOD(0x028F4280, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028F4440, void, __ctor, (RijndaelManagedTransform * __this));
IL2CPP_REGISTER_METHODINFO(0x04731838, RijndaelManagedTransform__ctor_1__MethodInfo);
}
