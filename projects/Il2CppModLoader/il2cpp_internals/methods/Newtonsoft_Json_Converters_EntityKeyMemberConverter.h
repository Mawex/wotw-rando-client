using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::EntityKeyMemberConverter {
IL2CPP_REGISTER_METHOD(0x01A52B10, void, WriteJson, (EntityKeyMemberConverter * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A52E80, void, ReadAndAssertProperty, (JsonReader * reader, String * propertyName));
IL2CPP_REGISTER_METHODINFO(0x047119C0, EntityKeyMemberConverter_ReadAndAssertProperty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A530D0, Object *, ReadJson, (EntityKeyMemberConverter * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A53390, void, EnsureReflectionObject, (Type * objectType));
IL2CPP_REGISTER_METHOD(0x01A53520, bool, CanConvert, (EntityKeyMemberConverter * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EntityKeyMemberConverter * __this));
}
