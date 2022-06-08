#include <interception_macros.h>

namespace app::methods::System::FormatException {
IL2CPP_REGISTER_METHOD(0x01A1C990, void, __ctor, (FormatException * __this));
IL2CPP_REGISTER_METHOD(0x01A1CA20, void, __ctor, (FormatException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01A1CA40, void, __ctor, (FormatException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor, (FormatException * __this, SerializationInfo * info, StreamingContext context));
}
