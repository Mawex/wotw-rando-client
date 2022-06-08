#include <interception_macros.h>

namespace app::methods::System::ApplicationException {
IL2CPP_REGISTER_METHOD(0x0228FE70, void, __ctor, (ApplicationException * __this));
IL2CPP_REGISTER_METHOD(0x0228FF30, void, __ctor, (ApplicationException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0228FFF0, void, __ctor, (ApplicationException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x022900B0, void, __ctor, (ApplicationException * __this, SerializationInfo * info, StreamingContext context));
}
