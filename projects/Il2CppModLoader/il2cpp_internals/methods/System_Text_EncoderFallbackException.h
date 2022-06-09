#include <interception_macros.h>

namespace app::methods::System_Text::EncoderFallbackException {
    IL2CPP_REGISTER_METHOD(0x0244D5B0, void, __ctor_1, (app::EncoderFallbackException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FEFD10, void, __ctor_2, (app::EncoderFallbackException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x0244D640, void, __ctor_3, (app::EncoderFallbackException * this_ptr, app::String * message, uint16_t char_unknown, int32_t index));
    IL2CPP_REGISTER_METHOD(0x0244D690, void, __ctor_4, (app::EncoderFallbackException * this_ptr, app::String * message, uint16_t char_unknown_high, uint16_t char_unknown_low, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0472BA50, EncoderFallbackException__ctor_3__MethodInfo);
}
