#include <interception_macros.h>

namespace app::methods::System::Reflection::PropertyInfo {
IL2CPP_REGISTER_METHOD(0x007E3F10, MemberTypes__Enum, get_MemberType, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02695A70, MethodInfo_1 *, GetGetMethod, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02695A90, MethodInfo_1 *, GetSetMethod, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02693FA0, Object *, GetValue, (PropertyInfo_1 * __this, Object * obj, Object__Array * index));
IL2CPP_REGISTER_METHOD(0x02695AB0, Object *, GetValue, (PropertyInfo_1 * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02695AF0, void, SetValue, (PropertyInfo_1 * __this, Object * obj, Object * value, Object__Array * index));
IL2CPP_REGISTER_METHOD(0x02695B30, void, SetValue, (PropertyInfo_1 * __this, Object * obj, Object * value));
IL2CPP_REGISTER_METHOD(0x02695B70, Type__Array *, GetOptionalCustomModifiers, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02695C10, Type__Array *, GetRequiredCustomModifiers, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02695CB0, NotImplementedException *, CreateNIE, ());
IL2CPP_REGISTER_METHOD(0x02695DF0, Object *, GetConstantValue, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x047331E0, PropertyInfo_1_GetConstantValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02695E30, Object *, GetRawConstantValue, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E068, PropertyInfo_1_GetRawConstantValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (PropertyInfo_1 * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (PropertyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02283820, bool, operator___, (PropertyInfo_1 * left, PropertyInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x02283870, bool, operator___, (PropertyInfo_1 * left, PropertyInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x02695E70, PropertyInfo_1 *, internal_from_handle_type, (void * event_handle, void * type_handle));
IL2CPP_REGISTER_METHOD(0x02695ED0, PropertyInfo_1 *, GetPropertyFromHandle, (RuntimePropertyHandle handle, RuntimeTypeHandle reflectedType));
IL2CPP_REGISTER_METHODINFO(0x04779B38, PropertyInfo_1_GetPropertyFromHandle__MethodInfo);
}
