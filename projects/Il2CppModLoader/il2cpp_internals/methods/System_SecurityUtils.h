#include <interception_macros.h>

namespace app::methods::System::SecurityUtils {
IL2CPP_REGISTER_METHOD(0x002FA000, void, DemandReflectionAccess, (Type * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DemandGrantSet, (Assembly * assembly));
IL2CPP_REGISTER_METHOD(0x02580230, bool, HasReflectionPermission, (Type * type));
IL2CPP_REGISTER_METHOD(0x025802D0, Object *, SecureCreateInstance, (Type * type));
IL2CPP_REGISTER_METHOD(0x02580370, Object *, SecureCreateInstance, (Type * type, Object__Array * args, bool allowNonPublic));
IL2CPP_REGISTER_METHODINFO(0x04772438, SecurityUtils_SecureCreateInstance_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025804F0, Object *, SecureCreateInstance, (Type * type, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x025805A0, Object *, SecureConstructorInvoke, (Type * type, Type__Array * argTypes, Object__Array * args, bool allowNonPublic));
IL2CPP_REGISTER_METHOD(0x02580680, Object *, SecureConstructorInvoke, (Type * type, Type__Array * argTypes, Object__Array * args, bool allowNonPublic, BindingFlags__Enum extraFlags));
IL2CPP_REGISTER_METHODINFO(0x04784370, SecurityUtils_SecureConstructorInvoke_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02580840, bool, GenericArgumentsAreVisible, (MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x025808F0, Object *, MethodInfoInvoke, (MethodInfo_1 * method_1, Object * target, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
