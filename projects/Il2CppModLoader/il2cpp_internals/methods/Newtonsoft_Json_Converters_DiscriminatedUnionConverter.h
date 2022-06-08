#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Converters::DiscriminatedUnionConverter {
IL2CPP_REGISTER_METHOD(0x01A50700, Type *, CreateUnionTypeLookup, (Type * t));
IL2CPP_REGISTER_METHODINFO(0x0478CA88, DiscriminatedUnionConverter_CreateUnionTypeLookup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A50990, DiscriminatedUnionConverter_Union *, CreateUnion, (Type * t));
IL2CPP_REGISTER_METHODINFO(0x047124E8, DiscriminatedUnionConverter_CreateUnion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A511B0, void, WriteJson, (DiscriminatedUnionConverter * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A518B0, Object *, ReadJson, (DiscriminatedUnionConverter * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHODINFO(0x04749868, DiscriminatedUnionConverter_ReadJson__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A52340, bool, CanConvert, (DiscriminatedUnionConverter * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DiscriminatedUnionConverter * __this));
IL2CPP_REGISTER_METHOD(0x01A526C0, void, __cctor, ());
}
