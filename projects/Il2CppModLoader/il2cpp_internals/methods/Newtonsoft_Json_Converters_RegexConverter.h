using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::RegexConverter {
IL2CPP_REGISTER_METHOD(0x01A54DE0, void, WriteJson, (RegexConverter * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01141CD0, bool, HasFlag, (RegexConverter * __this, RegexOptions__Enum options, RegexOptions__Enum flag));
IL2CPP_REGISTER_METHOD(0x01A55070, void, WriteBson, (RegexConverter * __this, BsonWriter * writer, Regex * regex));
IL2CPP_REGISTER_METHOD(0x01A551C0, void, WriteJson, (RegexConverter * __this, JsonWriter * writer, Regex * regex, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A553D0, Object *, ReadJson, (RegexConverter * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHODINFO(0x0470E5E8, RegexConverter_ReadJson__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A554E0, Object *, ReadRegexString, (RegexConverter * __this, JsonReader * reader));
IL2CPP_REGISTER_METHODINFO(0x04739988, RegexConverter_ReadRegexString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A55790, Regex *, ReadRegexObject, (RegexConverter * __this, JsonReader * reader, JsonSerializer * serializer));
IL2CPP_REGISTER_METHODINFO(0x0476E7C0, RegexConverter_ReadRegexObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A55D80, bool, CanConvert, (RegexConverter * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x01A55E70, bool, IsRegex, (RegexConverter * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RegexConverter * __this));
}
