#include <interception_macros.h>

namespace app::methods::System_Reflection::MethodInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MethodInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268D960, bool, operator____1, (app::MethodInfo_1 * left, app::MethodInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x0268DA40, bool, operator____2, (app::MethodInfo_1 * left, app::MethodInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (app::MethodInfo_1 * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::MethodInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9A0, MemberTypes__Enum, get_MemberType, (app::MethodInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268DA60, Type *, get_ReturnType, (app::MethodInfo_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0472D718, MethodInfo_1_get_ReturnType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DAB0, Type__Array *, GetGenericArguments, (app::MethodInfo_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475C168, MethodInfo_1_GetGenericArguments__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DB20, MethodInfo_1 *, GetGenericMethodDefinition, (app::MethodInfo_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04798AE8, MethodInfo_1_GetGenericMethodDefinition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DB90, MethodInfo_1 *, MakeGenericMethod, (app::MethodInfo_1 * this_ptr, app::Type__Array * type_arguments));
IL2CPP_REGISTER_METHODINFO(0x04797328, MethodInfo_1_MakeGenericMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DC00, Delegate *, CreateDelegate_1, (app::MethodInfo_1 * this_ptr, app::Type * delegate_type));
IL2CPP_REGISTER_METHODINFO(0x04734E78, MethodInfo_1_CreateDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DC70, Delegate *, CreateDelegate_2, (app::MethodInfo_1 * this_ptr, app::Type * delegate_type, app::Object * target));
IL2CPP_REGISTER_METHODINFO(0x0474FC38, MethodInfo_1_CreateDelegate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C50A0, MethodInfo_1 *, GetBaseMethod, (app::MethodInfo_1 * this_ptr));
}
