#include <interception_macros.h>

namespace app::methods::System::Reflection::MonoEvent {
IL2CPP_REGISTER_METHOD(0x0268FF20, MethodInfo_1 *, GetAddMethod, (MonoEvent * __this, bool nonPublic));
IL2CPP_REGISTER_METHOD(0x0268FFC0, MethodInfo_1 *, GetRaiseMethod, (MonoEvent * __this, bool nonPublic));
IL2CPP_REGISTER_METHOD(0x02690060, MethodInfo_1 *, GetRemoveMethod, (MonoEvent * __this, bool nonPublic));
IL2CPP_REGISTER_METHOD(0x026900F0, Type *, get_DeclaringType, (MonoEvent * __this));
IL2CPP_REGISTER_METHOD(0x02690120, Type *, get_ReflectedType, (MonoEvent * __this));
IL2CPP_REGISTER_METHOD(0x02690150, String *, get_Name, (MonoEvent * __this));
IL2CPP_REGISTER_METHOD(0x02690180, String *, ToString, (MonoEvent * __this));
IL2CPP_REGISTER_METHOD(0x02690240, bool, IsDefined, (MonoEvent * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02690300, Object__Array *, GetCustomAttributes, (MonoEvent * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x026903B0, Object__Array *, GetCustomAttributes, (MonoEvent * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x0268FE80, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (MonoEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MonoEvent * __this));
}
