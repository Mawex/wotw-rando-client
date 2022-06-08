using namespace app;

namespace app::methods::System::ArgumentOutOfRangeException {
IL2CPP_REGISTER_METHOD(0x022907B0, String *, get_RangeMessage, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02290870, void, __ctor, (ArgumentOutOfRangeException * __this));
IL2CPP_REGISTER_METHOD(0x022908A0, void, __ctor, (ArgumentOutOfRangeException * __this, String * paramName));
IL2CPP_REGISTER_METHOD(0x022908E0, void, __ctor, (ArgumentOutOfRangeException * __this, String * paramName, String * message));
IL2CPP_REGISTER_METHOD(0x02290920, void, __ctor, (ArgumentOutOfRangeException * __this, String * paramName, Object * actualValue, String * message));
IL2CPP_REGISTER_METHOD(0x02290970, String *, get_Message, (ArgumentOutOfRangeException * __this));
IL2CPP_REGISTER_METHOD(0x02290AD0, void, GetObjectData, (ArgumentOutOfRangeException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04757F30, ArgumentOutOfRangeException_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02290C10, void, __ctor, (ArgumentOutOfRangeException * __this, SerializationInfo * info, StreamingContext context));
}
