#include <interception_macros.h>

namespace app::methods::System::UIntPtr {
IL2CPP_REGISTER_METHOD(0x00206760, void, __ctor_1, (app::UIntPtr__Boxed * this_ptr, uint64_t value));
IL2CPP_REGISTER_METHODINFO(0x04708E68, UIntPtr__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00206770, void, __ctor_2, (app::UIntPtr__Boxed * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor_3, (app::UIntPtr__Boxed * this_ptr, app::Void * value));
IL2CPP_REGISTER_METHOD(0x00206780, bool, Equals, (app::UIntPtr__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::UIntPtr__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00107C00, uint64_t, ToUInt64, (app::UIntPtr__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00206790, String *, ToString, (app::UIntPtr__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00206840, void, ISerializable_GetObjectData, (app::UIntPtr__Boxed * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04781F50, UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (app::void * value1, app::void * value2));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator__1, (app::void * value));
IL2CPP_REGISTER_METHOD(0x004C50A0, void *, operator__2, (app::Void * value));
IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_Size, ());
IL2CPP_REGISTER_METHOD(0x027C59D0, void, __cctor, ());
}
