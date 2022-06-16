#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory {
    IL2CPP_REGISTER_METHOD(0x0301DA30, app::ReflectionDelegateFactory *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0301DAD0, app::ObjectConstructor_1_System_Object_ *, CreateParameterizedConstructor, (app::LateBoundReflectionDelegateFactory * this_ptr, app::MethodBase * method_1))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LateBoundReflectionDelegateFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0301DE10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x018F0AE0, app::MethodCall_2_System_Object_System_Object_ *, CreateMethodCall, (app::LateBoundReflectionDelegateFactory * this_ptr, app::MethodBase * method_1))
    IL2CPP_REGISTER_METHOD(0x02652CB0, app::Func_1_Object_ *, CreateDefaultConstructor, (app::LateBoundReflectionDelegateFactory * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x02653A50, app::Func_2_Object_Object_ *, CreateGet_1, (app::LateBoundReflectionDelegateFactory * this_ptr, app::PropertyInfo_1 * property_info))
    IL2CPP_REGISTER_METHOD(0x026537E0, app::Func_2_Object_Object_ *, CreateGet_2, (app::LateBoundReflectionDelegateFactory * this_ptr, app::FieldInfo_1 * field_info))
    IL2CPP_REGISTER_METHOD(0x018F17B0, app::Action_2_Object_Object_ *, CreateSet_1, (app::LateBoundReflectionDelegateFactory * this_ptr, app::FieldInfo_1 * field_info))
    IL2CPP_REGISTER_METHOD(0x018F1A20, app::Action_2_Object_Object_ *, CreateSet_2, (app::LateBoundReflectionDelegateFactory * this_ptr, app::PropertyInfo_1 * property_info))
}
