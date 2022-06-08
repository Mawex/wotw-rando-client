using namespace app;

namespace app::methods::System::Reflection::MethodInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MethodInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268D960, bool, operator___, (MethodInfo_1 * left, MethodInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x0268DA40, bool, operator___, (MethodInfo_1 * left, MethodInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (MethodInfo_1 * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (MethodInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, MemberTypes__Enum, get_MemberType, (MethodInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268DA60, Type *, get_ReturnType, (MethodInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0472D718, MethodInfo_1_get_ReturnType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DAB0, Type__Array *, GetGenericArguments, (MethodInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C168, MethodInfo_1_GetGenericArguments__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DB20, MethodInfo_1 *, GetGenericMethodDefinition, (MethodInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04798AE8, MethodInfo_1_GetGenericMethodDefinition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DB90, MethodInfo_1 *, MakeGenericMethod, (MethodInfo_1 * __this, Type__Array * typeArguments));
IL2CPP_REGISTER_METHODINFO(0x04797328, MethodInfo_1_MakeGenericMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DC00, Delegate *, CreateDelegate, (MethodInfo_1 * __this, Type * delegateType));
IL2CPP_REGISTER_METHODINFO(0x04734E78, MethodInfo_1_CreateDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268DC70, Delegate *, CreateDelegate, (MethodInfo_1 * __this, Type * delegateType, Object * target));
IL2CPP_REGISTER_METHODINFO(0x0474FC38, MethodInfo_1_CreateDelegate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C50A0, MethodInfo_1 *, GetBaseMethod, (MethodInfo_1 * __this));
}
