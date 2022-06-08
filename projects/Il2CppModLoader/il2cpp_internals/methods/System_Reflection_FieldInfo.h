#include <interception_macros.h>

namespace app::methods::System::Reflection::FieldInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x00910BD0, MemberTypes__Enum, get_MemberType, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268A3D0, bool, get_IsLiteral, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268A3F0, bool, get_IsStatic, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268A410, bool, get_IsInitOnly, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268A430, bool, get_IsPublic, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268A460, bool, get_IsPrivate, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268A480, bool, get_IsNotSerialized, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268A4A0, void, SetValue, (FieldInfo_1 * __this, Object * obj, Object * value));
IL2CPP_REGISTER_METHOD(0x0268A4D0, FieldInfo_1 *, internal_from_handle_type, (void * field_handle, void * type_handle));
IL2CPP_REGISTER_METHOD(0x0268A530, FieldInfo_1 *, GetFieldFromHandle, (RuntimeFieldHandle handle));
IL2CPP_REGISTER_METHODINFO(0x04788BB8, FieldInfo_1_GetFieldFromHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268A5F0, FieldInfo_1 *, GetFieldFromHandle, (RuntimeFieldHandle handle, RuntimeTypeHandle declaringType));
IL2CPP_REGISTER_METHODINFO(0x0475B130, FieldInfo_1_GetFieldFromHandle_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268A720, int32_t, GetFieldOffset, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04743C78, FieldInfo_1_GetFieldOffset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268A780, void, SetValueDirect, (FieldInfo_1 * __this, TypedReference obj, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04719C70, FieldInfo_1_SetValueDirect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, MarshalAsAttribute *, get_marshal_info, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268A7F0, Object__Array *, GetPseudoCustomAttributes, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268ABA0, Object *, GetRawConstantValue, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04749860, FieldInfo_1_GetRawConstantValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (FieldInfo_1 * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (FieldInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02283820, bool, operator___, (FieldInfo_1 * left, FieldInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x02283870, bool, operator___, (FieldInfo_1 * left, FieldInfo_1 * right));
}
