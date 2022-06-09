#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::FromBase64Transform {
    IL2CPP_REGISTER_METHOD(0x020D7E70, void, __ctor_1, (app::FromBase64Transform * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020D7F10, void, __ctor_2, (app::FromBase64Transform * this_ptr, app::FromBase64TransformMode__Enum whitespaces));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_InputBlockSize, (app::FromBase64Transform * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_OutputBlockSize, (app::FromBase64Transform * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanTransformMultipleBlocks, (app::FromBase64Transform * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (app::FromBase64Transform * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020D7FB0, int32_t, TransformBlock, (app::FromBase64Transform * this_ptr, app::Byte__Array * input_buffer, int32_t input_offset, int32_t input_count, app::Byte__Array * output_buffer, int32_t output_offset));
    IL2CPP_REGISTER_METHODINFO(0x04709750, FromBase64Transform_TransformBlock__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x020D8380, app::Byte__Array *, TransformFinalBlock, (app::FromBase64Transform * this_ptr, app::Byte__Array * input_buffer, int32_t input_offset, int32_t input_count));
    IL2CPP_REGISTER_METHODINFO(0x04760FD8, FromBase64Transform_TransformFinalBlock__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x020D8730, app::Byte__Array *, DiscardWhiteSpaces, (app::FromBase64Transform * this_ptr, app::Byte__Array * input_buffer, int32_t input_offset, int32_t input_count));
    IL2CPP_REGISTER_METHOD(0x020D8950, void, Dispose_1, (app::FromBase64Transform * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008001B0, void, Reset, (app::FromBase64Transform * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020D8950, void, Clear, (app::FromBase64Transform * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020D8A00, void, Dispose_2, (app::FromBase64Transform * this_ptr, bool disposing));
    IL2CPP_REGISTER_METHOD(0x020D8A40, void, Finalize, (app::FromBase64Transform * this_ptr));
}
