#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Linq::JTokenWriter {
IL2CPP_REGISTER_METHOD(0x01858240, JToken *, get_Token, (JTokenWriter * __this));
IL2CPP_REGISTER_METHOD(0x01858250, void, __ctor, (JTokenWriter * __this));
IL2CPP_REGISTER_METHOD(0x01858300, void, Close, (JTokenWriter * __this));
IL2CPP_REGISTER_METHOD(0x01858350, void, WriteStartObject, (JTokenWriter * __this));
IL2CPP_REGISTER_METHOD(0x018584D0, void, AddParent, (JTokenWriter * __this, JContainer * container));
IL2CPP_REGISTER_METHOD(0x018585C0, void, RemoveParent, (JTokenWriter * __this));
IL2CPP_REGISTER_METHOD(0x01858620, void, WriteStartArray, (JTokenWriter * __this));
IL2CPP_REGISTER_METHOD(0x018587A0, void, WriteStartConstructor, (JTokenWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x018585C0, void, WriteEnd, (JTokenWriter * __this, JsonToken__Enum_1 token));
IL2CPP_REGISTER_METHOD(0x01858920, void, WritePropertyName, (JTokenWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01858BA0, void, AddValue, (JTokenWriter * __this, Object * value, JsonToken__Enum_1 token));
IL2CPP_REGISTER_METHOD(0x01858D30, void, AddValue, (JTokenWriter * __this, JValue * value, JsonToken__Enum_1 token));
IL2CPP_REGISTER_METHOD(0x01858DE0, void, WriteValue, (JTokenWriter * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01858ED0, void, WriteNull, (JTokenWriter * __this));
IL2CPP_REGISTER_METHOD(0x01858F80, void, WriteUndefined, (JTokenWriter * __this));
IL2CPP_REGISTER_METHOD(0x01859030, void, WriteRaw, (JTokenWriter * __this, String * json));
IL2CPP_REGISTER_METHOD(0x018591A0, void, WriteComment, (JTokenWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x018591F0, void, WriteValue, (JTokenWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01859240, void, WriteValue, (JTokenWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01859300, void, WriteValue, (JTokenWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x018593C0, void, WriteValue, (JTokenWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01859480, void, WriteValue, (JTokenWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x01859540, void, WriteValue, (JTokenWriter * __this, float value));
IL2CPP_REGISTER_METHOD(0x01859600, void, WriteValue, (JTokenWriter * __this, double value));
IL2CPP_REGISTER_METHOD(0x018596C0, void, WriteValue, (JTokenWriter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01859780, void, WriteValue, (JTokenWriter * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x01859840, void, WriteValue, (JTokenWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01859900, void, WriteValue, (JTokenWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x018599D0, void, WriteValue, (JTokenWriter * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01859A90, void, WriteValue, (JTokenWriter * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x01859B50, void, WriteValue, (JTokenWriter * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x01859C20, void, WriteValue, (JTokenWriter * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x01859D10, void, WriteValue, (JTokenWriter * __this, DateTimeOffset value));
IL2CPP_REGISTER_METHOD(0x01859DE0, void, WriteValue, (JTokenWriter * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x01859E40, void, WriteValue, (JTokenWriter * __this, TimeSpan value));
IL2CPP_REGISTER_METHOD(0x01859F00, void, WriteValue, (JTokenWriter * __this, Guid value));
IL2CPP_REGISTER_METHOD(0x01859FD0, void, WriteValue, (JTokenWriter * __this, Uri * value));
IL2CPP_REGISTER_METHOD(0x0185A010, void, WriteToken, (JTokenWriter * __this, JsonReader * reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments));
}
