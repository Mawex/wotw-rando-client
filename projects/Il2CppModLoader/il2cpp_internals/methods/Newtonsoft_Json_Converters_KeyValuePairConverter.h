#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Converters::KeyValuePairConverter {
IL2CPP_REGISTER_METHOD(0x01A53E30, ReflectionObject *, InitializeReflectionObject, (Type * t));
IL2CPP_REGISTER_METHODINFO(0x0476F130, KeyValuePairConverter_InitializeReflectionObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A540F0, void, WriteJson, (KeyValuePairConverter * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A543D0, Object *, ReadJson, (KeyValuePairConverter * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHODINFO(0x0477E6E0, KeyValuePairConverter_ReadJson__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A54A60, bool, CanConvert, (KeyValuePairConverter * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (KeyValuePairConverter * __this));
IL2CPP_REGISTER_METHOD(0x01A54BB0, void, __cctor, ());
}
