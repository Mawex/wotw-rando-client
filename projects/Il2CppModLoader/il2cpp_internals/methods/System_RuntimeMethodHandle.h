#include <interception_macros.h>

namespace app::methods::System::RuntimeMethodHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (RuntimeMethodHandle__Boxed * __this, void * v));
IL2CPP_REGISTER_METHOD(0x001D8110, void, __ctor, (RuntimeMethodHandle__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04737570, RuntimeMethodHandle__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00107C00, void *, get_Value, (RuntimeMethodHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D8130, void, GetObjectData, (RuntimeMethodHandle__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047577E0, RuntimeMethodHandle_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D82A0, bool, Equals, (RuntimeMethodHandle__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (RuntimeMethodHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01EE2730, String *, ConstructInstantiation, (RuntimeMethodInfo * method_1, TypeNameFormatFlags__Enum format));
IL2CPP_REGISTER_METHOD(0x001D83D0, bool, IsNullHandle, (RuntimeMethodHandle__Boxed * __this));
}
