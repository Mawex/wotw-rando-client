#include <interception_macros.h>

namespace app::methods::System::IntPtr {
IL2CPP_REGISTER_METHOD(0x001DE610, void, __ctor, (IntPtr__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (IntPtr__Boxed * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (IntPtr__Boxed * __this, Void * value));
IL2CPP_REGISTER_METHOD(0x001E9770, void, __ctor, (IntPtr__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_Size, ());
IL2CPP_REGISTER_METHOD(0x001E9810, void, ISerializable_GetObjectData, (IntPtr__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04708FA8, IntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E98E0, bool, Equals, (IntPtr__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (IntPtr__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, ToInt32, (IntPtr__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9820, int64_t, ToInt64, (IntPtr__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C00, Void *, ToPointer, (IntPtr__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00131090, String *, ToString, (IntPtr__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E98F0, String *, ToString, (IntPtr__Boxed * __this, String * format));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (void * value1, void * value2));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator___, (void * value1, void * value2));
IL2CPP_REGISTER_METHOD(0x01A948E0, void *, operator_, (int32_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, void *, operator_, (int64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, void *, operator_, (Void * value));
IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator_, (void * value));
IL2CPP_REGISTER_METHOD(0x0238D4F0, int64_t, operator_, (void * value));
IL2CPP_REGISTER_METHOD(0x004C50A0, Void *, operator_, (void * value));
IL2CPP_REGISTER_METHOD(0x0157E100, void *, Add, (void * pointer, int32_t offset));
IL2CPP_REGISTER_METHOD(0x001D5C40, bool, IsNull, (IntPtr__Boxed * __this));
}
