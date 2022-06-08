#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Converters::ExpandoObjectConverter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteJson, (ExpandoObjectConverter * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A535C0, Object *, ReadJson, (ExpandoObjectConverter * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A535D0, Object *, ReadValue, (ExpandoObjectConverter * __this, JsonReader * reader));
IL2CPP_REGISTER_METHODINFO(0x04759458, ExpandoObjectConverter_ReadValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A537D0, Object *, ReadList, (ExpandoObjectConverter * __this, JsonReader * reader));
IL2CPP_REGISTER_METHODINFO(0x0474A5B0, ExpandoObjectConverter_ReadList__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A539C0, Object *, ReadObject, (ExpandoObjectConverter * __this, JsonReader * reader));
IL2CPP_REGISTER_METHODINFO(0x0475FAD8, ExpandoObjectConverter_ReadObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A53D80, bool, CanConvert, (ExpandoObjectConverter * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanWrite, (ExpandoObjectConverter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ExpandoObjectConverter * __this));
}
