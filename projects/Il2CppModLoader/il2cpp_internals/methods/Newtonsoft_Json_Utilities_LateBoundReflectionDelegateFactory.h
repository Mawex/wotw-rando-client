#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory {
IL2CPP_REGISTER_METHOD(0x0301DA30, ReflectionDelegateFactory *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x0301DAD0, ObjectConstructor_1_System_Object_ *, CreateParameterizedConstructor, (LateBoundReflectionDelegateFactory * __this, MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LateBoundReflectionDelegateFactory * __this));
IL2CPP_REGISTER_METHOD(0x0301DE10, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x018F0AE0, MethodCall_2_System_Object_System_Object_ *, CreateMethodCall, (LateBoundReflectionDelegateFactory * __this, MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x02652CB0, Func_1_Object_ *, CreateDefaultConstructor, (LateBoundReflectionDelegateFactory * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x02653A50, Func_2_Object_Object_ *, CreateGet, (LateBoundReflectionDelegateFactory * __this, PropertyInfo_1 * propertyInfo));
IL2CPP_REGISTER_METHOD(0x026537E0, Func_2_Object_Object_ *, CreateGet, (LateBoundReflectionDelegateFactory * __this, FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x018F17B0, Action_2_Object_Object_ *, CreateSet, (LateBoundReflectionDelegateFactory * __this, FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x018F1A20, Action_2_Object_Object_ *, CreateSet, (LateBoundReflectionDelegateFactory * __this, PropertyInfo_1 * propertyInfo));
}
