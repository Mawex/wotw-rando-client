#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::DynamicReflectionDelegateFactory {
IL2CPP_REGISTER_METHOD(0x01C0C750, DynamicReflectionDelegateFactory *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01C0C7F0, DynamicMethod *, CreateDynamicMethod, (String * name, Type * returnType, Type__Array * parameterTypes, Type * owner));
IL2CPP_REGISTER_METHOD(0x01C0C900, ObjectConstructor_1_System_Object_ *, CreateParameterizedConstructor, (DynamicReflectionDelegateFactory * __this, MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x01C0CAA0, void, GenerateCreateMethodCallIL, (DynamicReflectionDelegateFactory * __this, MethodBase * method_1, ILGenerator * generator, int32_t argsIndex));
IL2CPP_REGISTER_METHOD(0x01C0D900, void, GenerateCreateDefaultConstructorIL, (DynamicReflectionDelegateFactory * __this, Type * type, ILGenerator * generator, Type * delegateType));
IL2CPP_REGISTER_METHODINFO(0x0473C890, DynamicReflectionDelegateFactory_GenerateCreateDefaultConstructorIL__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C0DBE0, void, GenerateCreateGetPropertyIL, (DynamicReflectionDelegateFactory * __this, PropertyInfo_1 * propertyInfo, ILGenerator * generator));
IL2CPP_REGISTER_METHODINFO(0x04745228, DynamicReflectionDelegateFactory_GenerateCreateGetPropertyIL__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C0DDF0, void, GenerateCreateGetFieldIL, (DynamicReflectionDelegateFactory * __this, FieldInfo_1 * fieldInfo, ILGenerator * generator));
IL2CPP_REGISTER_METHOD(0x01C0DF80, void, GenerateCreateSetFieldIL, (FieldInfo_1 * fieldInfo, ILGenerator * generator));
IL2CPP_REGISTER_METHOD(0x01C0E160, void, GenerateCreateSetPropertyIL, (PropertyInfo_1 * propertyInfo, ILGenerator * generator));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DynamicReflectionDelegateFactory * __this));
IL2CPP_REGISTER_METHOD(0x01C0E2E0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x018F08F0, MethodCall_2_System_Object_System_Object_ *, CreateMethodCall, (DynamicReflectionDelegateFactory * __this, MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x02652B60, Func_1_Object_ *, CreateDefaultConstructor, (DynamicReflectionDelegateFactory * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x02653630, Func_2_Object_Object_ *, CreateGet, (DynamicReflectionDelegateFactory * __this, PropertyInfo_1 * propertyInfo));
IL2CPP_REGISTER_METHOD(0x02653250, Func_2_Object_Object_ *, CreateGet, (DynamicReflectionDelegateFactory * __this, FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x018F13D0, Action_2_Object_Object_ *, CreateSet, (DynamicReflectionDelegateFactory * __this, FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x018F15C0, Action_2_Object_Object_ *, CreateSet, (DynamicReflectionDelegateFactory * __this, PropertyInfo_1 * propertyInfo));
}
