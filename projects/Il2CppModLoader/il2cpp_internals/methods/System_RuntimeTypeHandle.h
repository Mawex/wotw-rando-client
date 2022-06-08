#include <interception_macros.h>

namespace app::methods::System::RuntimeTypeHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (RuntimeTypeHandle__Boxed * __this, void * val));
IL2CPP_REGISTER_METHOD(0x001D83E0, void, __ctor, (RuntimeTypeHandle__Boxed * __this, RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x001D8400, void, __ctor, (RuntimeTypeHandle__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04728F00, RuntimeTypeHandle__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00107C00, void *, get_Value, (RuntimeTypeHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D8420, void, GetObjectData, (RuntimeTypeHandle__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0476E560, RuntimeTypeHandle_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D8440, bool, Equals, (RuntimeTypeHandle__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (RuntimeTypeHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01EE7420, TypeAttributes__Enum, GetAttributes, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EEAF60, int32_t, GetMetadataToken, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EEAF60, int32_t, GetToken, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EF05E0, Type *, GetGenericTypeDefinition_impl, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EF05E0, Type *, GetGenericTypeDefinition, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE7770, bool, HasElementType, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE9140, bool, HasInstantiation, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE7920, bool, IsArray, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE7520, bool, IsByRef, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsComObject, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE6CF0, bool, IsInstanceOfType, (RuntimeType * type, Object * o));
IL2CPP_REGISTER_METHOD(0x01EE7560, bool, IsPointer, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE7530, bool, IsPrimitive, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EF0640, bool, HasReferences, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsComObject, (RuntimeType * type, bool isGenericCOM));
IL2CPP_REGISTER_METHOD(0x01EE7450, bool, IsContextful, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsEquivalentTo, (RuntimeType * rtType1, RuntimeType * rtType2));
IL2CPP_REGISTER_METHOD(0x01EE78C0, bool, IsSzArray, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EF0660, bool, IsInterface, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EF0690, int32_t, GetArrayRank, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE6CD0, RuntimeAssembly *, GetAssembly, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE7A30, RuntimeType *, GetElementType, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE6CB0, RuntimeModule *, GetModule, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EE8ED0, bool, IsGenericVariable, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EF06B0, RuntimeType *, GetBaseType, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EF06E0, bool, CanCastTo, (RuntimeType * type, RuntimeType * target));
IL2CPP_REGISTER_METHOD(0x01EF0750, bool, type_is_assignable_from, (Type * a, Type * b));
IL2CPP_REGISTER_METHOD(0x01EE8EA0, bool, IsGenericTypeDefinition, (RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x01EF07C0, void *, GetGenericParameterInfo, (RuntimeType * type));
}
