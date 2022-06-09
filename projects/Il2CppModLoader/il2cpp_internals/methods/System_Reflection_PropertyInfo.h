#include <interception_macros.h>

namespace app::methods::System_Reflection::PropertyInfo {
IL2CPP_REGISTER_METHOD(0x007E3F10, MemberTypes__Enum, get_MemberType, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02695A70, MethodInfo_1 *, GetGetMethod, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02695A90, MethodInfo_1 *, GetSetMethod, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02693FA0, Object *, GetValue_1, (app::PropertyInfo_1 * this_ptr, app::Object * obj, app::Object__Array * index));
IL2CPP_REGISTER_METHOD(0x02695AB0, Object *, GetValue_2, (app::PropertyInfo_1 * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x02695AF0, void, SetValue_1, (app::PropertyInfo_1 * this_ptr, app::Object * obj, app::Object * value, app::Object__Array * index));
IL2CPP_REGISTER_METHOD(0x02695B30, void, SetValue_2, (app::PropertyInfo_1 * this_ptr, app::Object * obj, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02695B70, Type__Array *, GetOptionalCustomModifiers, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02695C10, Type__Array *, GetRequiredCustomModifiers, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02695CB0, NotImplementedException *, CreateNIE, ());
IL2CPP_REGISTER_METHOD(0x02695DF0, Object *, GetConstantValue, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047331E0, PropertyInfo_1_GetConstantValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02695E30, Object *, GetRawConstantValue, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475E068, PropertyInfo_1_GetRawConstantValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (app::PropertyInfo_1 * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::PropertyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02283820, bool, operator____1, (app::PropertyInfo_1 * left, app::PropertyInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x02283870, bool, operator____2, (app::PropertyInfo_1 * left, app::PropertyInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x02695E70, PropertyInfo_1 *, internal_from_handle_type, (app::void * event_handle, app::void * type_handle));
IL2CPP_REGISTER_METHOD(0x02695ED0, PropertyInfo_1 *, GetPropertyFromHandle, (app::RuntimePropertyHandle handle, app::RuntimeTypeHandle reflected_type));
IL2CPP_REGISTER_METHODINFO(0x04779B38, PropertyInfo_1_GetPropertyFromHandle__MethodInfo);
}
