#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexMatchTimeoutException {
    IL2CPP_REGISTER_METHOD(0x025959D0, void, ctor_1, (app::RegexMatchTimeoutException * this_ptr, app::String * regex_input, app::String * regex_pattern, app::TimeSpan match_timeout))
    IL2CPP_REGISTER_METHOD(0x02595AC0, void, ctor_2, (app::RegexMatchTimeoutException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02595C10, void, ctor_3, (app::RegexMatchTimeoutException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02595D40, void, ISerializable_GetObjectData, (app::RegexMatchTimeoutException * this_ptr, app::SerializationInfo * si, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02595E40, void, Init_1, (app::RegexMatchTimeoutException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02595EF0, void, Init_2, (app::RegexMatchTimeoutException * this_ptr, app::String * input, app::String * pattern, app::TimeSpan timeout))
}
