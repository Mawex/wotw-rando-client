#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Linq::JTokenReader {
IL2CPP_REGISTER_METHOD(0x002FBC40, JToken *, get_CurrentToken, (JTokenReader * __this));
IL2CPP_REGISTER_METHOD(0x018570A0, void, __ctor, (JTokenReader * __this, JToken * token));
IL2CPP_REGISTER_METHOD(0x01857150, bool, Read, (JTokenReader * __this));
IL2CPP_REGISTER_METHOD(0x018572D0, bool, ReadOver, (JTokenReader * __this, JToken * t));
IL2CPP_REGISTER_METHOD(0x018573D0, bool, ReadToEnd, (JTokenReader * __this));
IL2CPP_REGISTER_METHOD(0x01857400, Nullable_1_Newtonsoft_Json_JsonToken_, GetEndToken, (JTokenReader * __this, JContainer * c));
IL2CPP_REGISTER_METHODINFO(0x04747240, JTokenReader_GetEndToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01857570, bool, ReadInto, (JTokenReader * __this, JContainer * c));
IL2CPP_REGISTER_METHOD(0x018575F0, bool, SetEnd, (JTokenReader * __this, JContainer * c));
IL2CPP_REGISTER_METHOD(0x018577E0, void, SetToken, (JTokenReader * __this, JToken * token));
IL2CPP_REGISTER_METHODINFO(0x04706B40, JTokenReader_SetToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01857E10, String *, SafeToString, (JTokenReader * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01857E30, bool, IJsonLineInfo_HasLineInfo, (JTokenReader * __this));
IL2CPP_REGISTER_METHOD(0x01857ED0, int32_t, IJsonLineInfo_get_LineNumber, (JTokenReader * __this));
IL2CPP_REGISTER_METHOD(0x01857F70, int32_t, IJsonLineInfo_get_LinePosition, (JTokenReader * __this));
IL2CPP_REGISTER_METHOD(0x01858010, String *, get_Path, (JTokenReader * __this));
}
