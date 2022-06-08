using namespace app;

namespace app::methods::System::Runtime::Serialization::SerializationInfoEnumerator {
IL2CPP_REGISTER_METHOD(0x01EE10F0, void, __ctor, (SerializationInfoEnumerator * __this, String__Array * members, Object__Array * info, Type__Array * types, int32_t numItems));
IL2CPP_REGISTER_METHOD(0x01EE1120, bool, MoveNext, (SerializationInfoEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01EE1140, Object *, IEnumerator_get_Current, (SerializationInfoEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04701FE8, SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE12E0, SerializationEntry, get_Current, (SerializationInfoEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04741230, SerializationInfoEnumerator_get_Current__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE1450, void, Reset, (SerializationInfoEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01EE1460, String *, get_Name, (SerializationInfoEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F420, SerializationInfoEnumerator_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE1550, Object *, get_Value, (SerializationInfoEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x0473AAD0, SerializationInfoEnumerator_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE1640, Type *, get_ObjectType, (SerializationInfoEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04713350, SerializationInfoEnumerator_get_ObjectType__MethodInfo);
}
