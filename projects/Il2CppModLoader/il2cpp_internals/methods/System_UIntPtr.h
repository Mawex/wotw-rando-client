#include <interception_macros.h>

namespace app::methods::System::UIntPtr {
IL2CPP_REGISTER_METHOD(0x00206760, void, __ctor, (UIntPtr__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHODINFO(0x04708E68, UIntPtr__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00206770, void, __ctor, (UIntPtr__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (UIntPtr__Boxed * __this, Void * value));
IL2CPP_REGISTER_METHOD(0x00206780, bool, Equals, (UIntPtr__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (UIntPtr__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C00, uint64_t, ToUInt64, (UIntPtr__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206790, String *, ToString, (UIntPtr__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206840, void, ISerializable_GetObjectData, (UIntPtr__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04781F50, UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (void * value1, void * value2));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (void * value));
IL2CPP_REGISTER_METHOD(0x004C50A0, void *, operator_, (Void * value));
IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_Size, ());
IL2CPP_REGISTER_METHOD(0x027C59D0, void, __cctor, ());
}
