#include <interception_macros.h>

namespace app::methods::System::RuntimeFieldHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (RuntimeFieldHandle__Boxed * __this, void * v));
IL2CPP_REGISTER_METHOD(0x001D7E50, void, __ctor, (RuntimeFieldHandle__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047077F8, RuntimeFieldHandle__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00107C00, void *, get_Value, (RuntimeFieldHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D7E70, void, GetObjectData, (RuntimeFieldHandle__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0472FA68, RuntimeFieldHandle_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D7FE0, bool, Equals, (RuntimeFieldHandle__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (RuntimeFieldHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01EE2430, void, SetValueInternal, (FieldInfo_1 * fi, Object * obj, Object * value));
IL2CPP_REGISTER_METHOD(0x01EE2430, void, SetValue, (RtFieldInfo * field, Object * obj, Object * value, RuntimeType * fieldType, FieldAttributes__Enum fieldAttr, RuntimeType * declaringType, bool * domainInitialized));
IL2CPP_REGISTER_METHOD(0x01EE2440, void, SetValueDirect, (RtFieldInfo * field, RuntimeType * fieldType, Void * pTypedRef, Object * value, RuntimeType * contextType));
}
