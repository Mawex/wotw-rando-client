#include <interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::COMException {
IL2CPP_REGISTER_METHOD(0x01A93CC0, void, __ctor, (COMException * __this));
IL2CPP_REGISTER_METHOD(0x01A93D50, void, __ctor, (COMException * __this, String * message, int32_t errorCode));
IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor, (COMException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01A93D80, String *, ToString, (COMException * __this));
}
