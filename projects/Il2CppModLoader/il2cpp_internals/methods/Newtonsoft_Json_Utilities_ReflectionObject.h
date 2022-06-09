#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Utilities::ReflectionObject {
IL2CPP_REGISTER_METHOD(0x002FA280, ObjectConstructor_1_System_Object_ *, get_Creator, (app::ReflectionObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember_ *, get_Members, (app::ReflectionObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x0301F4C0, void, __ctor, (app::ReflectionObject * this_ptr, app::ObjectConstructor_1_System_Object_ * creator));
IL2CPP_REGISTER_METHOD(0x0301F650, Object *, GetValue, (app::ReflectionObject * this_ptr, app::Object * target, app::String * member));
IL2CPP_REGISTER_METHOD(0x0301F720, void, SetValue, (app::ReflectionObject * this_ptr, app::Object * target, app::String * member, app::Object * value));
IL2CPP_REGISTER_METHOD(0x0301F800, Type *, GetType, (app::ReflectionObject * this_ptr, app::String * member));
IL2CPP_REGISTER_METHOD(0x0301F8B0, ReflectionObject *, Create_1, (app::Type * t, app::String__Array * member_names));
IL2CPP_REGISTER_METHOD(0x0301F8C0, ReflectionObject *, Create_2, (app::Type * t, app::MethodBase * creator, app::String__Array * member_names));
IL2CPP_REGISTER_METHODINFO(0x047216C0, ReflectionObject_Create_1__MethodInfo);
}
