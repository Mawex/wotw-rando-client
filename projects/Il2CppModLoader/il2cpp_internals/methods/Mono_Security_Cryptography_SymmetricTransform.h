using namespace app;

namespace app::methods::Mono::Security::Cryptography::SymmetricTransform {
IL2CPP_REGISTER_METHOD(0x025D7EF0, void, __ctor, (SymmetricTransform * __this, SymmetricAlgorithm * symmAlgo, bool encryption, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x0470FC10, SymmetricTransform__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D8260, void, Finalize, (SymmetricTransform * __this));
IL2CPP_REGISTER_METHOD(0x025D82E0, void, IDisposable_Dispose, (SymmetricTransform * __this));
IL2CPP_REGISTER_METHOD(0x025D8390, void, Dispose, (SymmetricTransform * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, (SymmetricTransform * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReuseTransform, (SymmetricTransform * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_InputBlockSize, (SymmetricTransform * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_OutputBlockSize, (SymmetricTransform * __this));
IL2CPP_REGISTER_METHOD(0x025D83F0, void, Transform, (SymmetricTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHODINFO(0x0475AE80, SymmetricTransform_Transform__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D8610, void, CBC, (SymmetricTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHOD(0x025D87B0, void, CFB, (SymmetricTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHOD(0x025D8A20, void, OFB, (SymmetricTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHODINFO(0x047800E0, SymmetricTransform_OFB__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D8A80, void, CTS, (SymmetricTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHODINFO(0x047759D8, SymmetricTransform_CTS__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D8AE0, void, CheckInput, (SymmetricTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x0470A5E8, SymmetricTransform_CheckInput__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D8C70, int32_t, TransformBlock, (SymmetricTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHODINFO(0x04775C08, SymmetricTransform_TransformBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D8F50, bool, get_KeepLastBlock, (SymmetricTransform * __this));
IL2CPP_REGISTER_METHOD(0x025D8F70, int32_t, InternalTransformBlock, (SymmetricTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHODINFO(0x04758488, SymmetricTransform_InternalTransformBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D9190, void, Random, (SymmetricTransform * __this, Byte__Array * buffer, int32_t start, int32_t length));
IL2CPP_REGISTER_METHOD(0x025D9290, void, ThrowBadPaddingException, (SymmetricTransform * __this, PaddingMode__Enum padding, int32_t length, int32_t position));
IL2CPP_REGISTER_METHODINFO(0x0471E958, SymmetricTransform_ThrowBadPaddingException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D9450, Byte__Array *, FinalEncrypt, (SymmetricTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x04761BB0, SymmetricTransform_FinalEncrypt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D9850, Byte__Array *, FinalDecrypt, (SymmetricTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x025D9BE0, Byte__Array *, TransformFinalBlock, (SymmetricTransform * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x047693C0, SymmetricTransform_TransformFinalBlock__MethodInfo);
}
