#include <interception_macros.h>

namespace app::methods::System_Runtime_Serialization::SerializationInfoEnumerator {
IL2CPP_REGISTER_METHOD(0x01EE10F0, void, __ctor, (app::SerializationInfoEnumerator * this_ptr, app::String__Array * members, app::Object__Array * info, app::Type__Array * types, int32_t num_items));
IL2CPP_REGISTER_METHOD(0x01EE1120, bool, MoveNext, (app::SerializationInfoEnumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EE1140, Object *, IEnumerator_get_Current, (app::SerializationInfoEnumerator * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04701FE8, SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE12E0, SerializationEntry, get_Current, (app::SerializationInfoEnumerator * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04741230, SerializationInfoEnumerator_get_Current__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE1450, void, Reset, (app::SerializationInfoEnumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EE1460, String *, get_Name, (app::SerializationInfoEnumerator * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0476F420, SerializationInfoEnumerator_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE1550, Object *, get_Value, (app::SerializationInfoEnumerator * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473AAD0, SerializationInfoEnumerator_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE1640, Type *, get_ObjectType, (app::SerializationInfoEnumerator * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04713350, SerializationInfoEnumerator_get_ObjectType__MethodInfo);
}
