#include <interception_macros.h>

namespace app::methods::System::SystemException {
IL2CPP_REGISTER_METHOD(0x0243E4C0, void, __ctor, (SystemException * __this));
IL2CPP_REGISTER_METHOD(0x0243E580, void, __ctor, (SystemException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0243E640, void, __ctor, (SystemException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x0243E700, void, __ctor, (SystemException * __this, SerializationInfo * info, StreamingContext context));
}
