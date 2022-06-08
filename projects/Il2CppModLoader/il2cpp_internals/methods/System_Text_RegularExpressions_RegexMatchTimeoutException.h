#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexMatchTimeoutException {
IL2CPP_REGISTER_METHOD(0x025959D0, void, __ctor, (RegexMatchTimeoutException * __this, String * regexInput, String * regexPattern, TimeSpan matchTimeout));
IL2CPP_REGISTER_METHOD(0x02595AC0, void, __ctor, (RegexMatchTimeoutException * __this));
IL2CPP_REGISTER_METHOD(0x02595C10, void, __ctor, (RegexMatchTimeoutException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02595D40, void, ISerializable_GetObjectData, (RegexMatchTimeoutException * __this, SerializationInfo * si, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02595E40, void, Init, (RegexMatchTimeoutException * __this));
IL2CPP_REGISTER_METHOD(0x02595EF0, void, Init, (RegexMatchTimeoutException * __this, String * input, String * pattern, TimeSpan timeout));
}
