#include <interception_macros.h>

namespace app::methods::System::MissingFieldException {
IL2CPP_REGISTER_METHOD(0x0226A0C0, void, __ctor, (MissingFieldException * __this));
IL2CPP_REGISTER_METHOD(0x0226A150, void, __ctor, (MissingFieldException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0226A170, void, __ctor, (MissingFieldException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0226A190, String *, get_Message, (MissingFieldException * __this));
IL2CPP_REGISTER_METHOD(0x0226A300, void, __ctor, (MissingFieldException * __this, String * className, String * fieldName));
}
