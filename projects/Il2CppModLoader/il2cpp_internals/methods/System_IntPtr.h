#include <interception_macros.h>

namespace app::methods::System::IntPtr {
IL2CPP_REGISTER_METHOD(0x001DE610, void, __ctor_1, (app::IntPtr__Boxed * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor_2, (app::IntPtr__Boxed * this_ptr, int64_t value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor_3, (app::IntPtr__Boxed * this_ptr, app::Void * value));
IL2CPP_REGISTER_METHOD(0x001E9770, void, __ctor_4, (app::IntPtr__Boxed * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_Size, ());
IL2CPP_REGISTER_METHOD(0x001E9810, void, ISerializable_GetObjectData, (app::IntPtr__Boxed * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04708FA8, IntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E98E0, bool, Equals, (app::IntPtr__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::IntPtr__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, ToInt32, (app::IntPtr__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D9820, int64_t, ToInt64, (app::IntPtr__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00107C00, Void *, ToPointer, (app::IntPtr__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00131090, String *, ToString_1, (app::IntPtr__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001E98F0, String *, ToString_2, (app::IntPtr__Boxed * this_ptr, app::String * format));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::void * value1, app::void * value2));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator____2, (app::void * value1, app::void * value2));
IL2CPP_REGISTER_METHOD(0x01A948E0, void *, operator__1, (int32_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, void *, operator__2, (int64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, void *, operator__3, (app::Void * value));
IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator__4, (app::void * value));
IL2CPP_REGISTER_METHOD(0x0238D4F0, int64_t, operator__5, (app::void * value));
IL2CPP_REGISTER_METHOD(0x004C50A0, Void *, operator__6, (app::void * value));
IL2CPP_REGISTER_METHOD(0x0157E100, void *, Add, (app::void * pointer, int32_t offset));
IL2CPP_REGISTER_METHOD(0x001D5C40, bool, IsNull, (app::IntPtr__Boxed * this_ptr));
}
