using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::BinaryConverter {
IL2CPP_REGISTER_METHOD(0x01A4D430, void, WriteJson, (BinaryConverter_1 * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A4D4A0, Byte__Array *, GetByteArray, (BinaryConverter_1 * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472EC70, BinaryConverter_1_GetByteArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4D6E0, void, EnsureReflectionObject, (Type * t));
IL2CPP_REGISTER_METHOD(0x01A4D8F0, Object *, ReadJson, (BinaryConverter_1 * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHODINFO(0x04769C28, BinaryConverter_1_ReadJson__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4DD80, Byte__Array *, ReadByteArray, (BinaryConverter_1 * __this, JsonReader * reader));
IL2CPP_REGISTER_METHODINFO(0x04788CC0, BinaryConverter_1_ReadByteArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4E1D0, bool, CanConvert, (BinaryConverter_1 * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BinaryConverter_1 * __this));
}
