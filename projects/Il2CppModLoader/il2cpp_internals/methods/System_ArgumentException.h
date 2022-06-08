#include <interception_macros.h>

namespace app::methods::System::ArgumentException {
IL2CPP_REGISTER_METHOD(0x022901E0, void, __ctor, (ArgumentException * __this));
IL2CPP_REGISTER_METHOD(0x01FEFCD0, void, __ctor, (ArgumentException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01FEFCF0, void, __ctor, (ArgumentException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x02290270, void, __ctor, (ArgumentException * __this, String * message, String * paramName, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x022902B0, void, __ctor, (ArgumentException * __this, String * message, String * paramName));
IL2CPP_REGISTER_METHOD(0x022902F0, void, __ctor, (ArgumentException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x022903C0, String *, get_Message, (ArgumentException * __this));
IL2CPP_REGISTER_METHOD(0x02290500, void, GetObjectData, (ArgumentException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04719938, ArgumentException_GetObjectData__MethodInfo);
}
