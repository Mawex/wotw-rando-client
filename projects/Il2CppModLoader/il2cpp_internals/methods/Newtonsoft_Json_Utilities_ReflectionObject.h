#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::ReflectionObject {
IL2CPP_REGISTER_METHOD(0x002FA280, ObjectConstructor_1_System_Object_ *, get_Creator, (ReflectionObject * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember_ *, get_Members, (ReflectionObject * __this));
IL2CPP_REGISTER_METHOD(0x0301F4C0, void, __ctor, (ReflectionObject * __this, ObjectConstructor_1_System_Object_ * creator));
IL2CPP_REGISTER_METHOD(0x0301F650, Object *, GetValue, (ReflectionObject * __this, Object * target, String * member));
IL2CPP_REGISTER_METHOD(0x0301F720, void, SetValue, (ReflectionObject * __this, Object * target, String * member, Object * value));
IL2CPP_REGISTER_METHOD(0x0301F800, Type *, GetType, (ReflectionObject * __this, String * member));
IL2CPP_REGISTER_METHOD(0x0301F8B0, ReflectionObject *, Create, (Type * t, String__Array * memberNames));
IL2CPP_REGISTER_METHOD(0x0301F8C0, ReflectionObject *, Create, (Type * t, MethodBase * creator, String__Array * memberNames));
IL2CPP_REGISTER_METHODINFO(0x047216C0, ReflectionObject_Create_1__MethodInfo);
}
