using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::BsonObjectIdConverter {
IL2CPP_REGISTER_METHOD(0x01A4E320, void, WriteJson, (BsonObjectIdConverter * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A4E5C0, Object *, ReadJson, (BsonObjectIdConverter * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHODINFO(0x04780338, BsonObjectIdConverter_ReadJson__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4E8E0, bool, CanConvert, (BsonObjectIdConverter * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BsonObjectIdConverter * __this));
}
