#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Converters::DataSetConverter {
IL2CPP_REGISTER_METHOD(0x01A4E990, void, WriteJson, (DataSetConverter * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A4EE90, Object *, ReadJson, (DataSetConverter * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A4F280, bool, CanConvert, (DataSetConverter * __this, Type * valueType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DataSetConverter * __this));
}
