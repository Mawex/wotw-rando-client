#include <interception_macros.h>

namespace app::methods::PlayFab::Json::PlayFabSimpleJson {
    IL2CPP_REGISTER_METHOD(0x01848270, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x018487B0, app::Object *, DeserializeObject_1, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x04726788, PlayFabSimpleJson_DeserializeObject__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01848930, bool, TryDeserializeObject, (app::String * json, app::Object * * obj));
    IL2CPP_REGISTER_METHOD(0x01848A20, app::Object *, DeserializeObject_2, (app::String * json, app::Type * type, app::IJsonSerializerStrategy * json_serializer_strategy));
    IL2CPP_REGISTER_METHOD(0x01848D00, app::String *, SerializeObject_1, (app::Object * json, app::IJsonSerializerStrategy * json_serializer_strategy));
    IL2CPP_REGISTER_METHOD(0x018490A0, app::String *, EscapeToJavascriptString, (app::String * json_string));
    IL2CPP_REGISTER_METHOD(0x01849390, app::IDictionary_2_System_String_System_Object_ *, ParseObject, (app::String * json, int32_t * index, bool * success));
    IL2CPP_REGISTER_METHOD(0x01849660, app::JsonArray *, ParseArray, (app::String * json, int32_t * index, bool * success));
    IL2CPP_REGISTER_METHOD(0x018498B0, app::Object *, ParseValue, (app::String * json, int32_t * index, bool * success));
    IL2CPP_REGISTER_METHOD(0x01849B40, app::String *, ParseString, (app::String * json, int32_t * index, bool * success));
    IL2CPP_REGISTER_METHOD(0x0184A6B0, app::String *, ConvertFromUtf32, (int32_t utf32));
    IL2CPP_REGISTER_METHODINFO(0x047693B8, PlayFabSimpleJson_ConvertFromUtf32__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0184A870, app::Object *, ParseNumber, (app::String * json, int32_t * index, bool * success));
    IL2CPP_REGISTER_METHOD(0x0184AC70, int32_t, GetLastIndexOfNumber, (app::String * json, int32_t index));
    IL2CPP_REGISTER_METHOD(0x0184AD50, void, EatWhitespace, (app::String * json, int32_t * index));
    IL2CPP_REGISTER_METHOD(0x0184AE30, app::PlayFabSimpleJson_TokenType__Enum, LookAhead, (app::String * json, int32_t index));
    IL2CPP_REGISTER_METHOD(0x0184AEE0, app::PlayFabSimpleJson_TokenType__Enum, NextToken, (app::String * json, int32_t * index));
    IL2CPP_REGISTER_METHOD(0x0184B240, bool, SerializeValue, (app::IJsonSerializerStrategy * json_serializer_strategy, app::Object * value, app::StringBuilder * builder));
    IL2CPP_REGISTER_METHOD(0x0184B8B0, bool, SerializeObject_2, (app::IJsonSerializerStrategy * json_serializer_strategy, app::IEnumerable * keys, app::IEnumerable * values, app::StringBuilder * builder));
    IL2CPP_REGISTER_METHOD(0x0184BB40, bool, SerializeArray, (app::IJsonSerializerStrategy * json_serializer_strategy, app::IEnumerable * an_array, app::StringBuilder * builder));
    IL2CPP_REGISTER_METHOD(0x0184BDB0, bool, SerializeString, (app::String * a_string, app::StringBuilder * builder));
    IL2CPP_REGISTER_METHOD(0x0184C0E0, bool, SerializeNumber, (app::Object * number, app::StringBuilder * builder));
    IL2CPP_REGISTER_METHOD(0x0184C3F0, bool, IsNumeric, (app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0184C570, app::IJsonSerializerStrategy *, get_CurrentJsonSerializerStrategy, ());
    IL2CPP_REGISTER_METHOD(0x0184C640, void, set_CurrentJsonSerializerStrategy, (app::IJsonSerializerStrategy * value));
    IL2CPP_REGISTER_METHOD(0x0184C6F0, app::PocoJsonSerializerStrategy *, get_PocoJsonSerializerStrategy, ());
    IL2CPP_REGISTER_METHOD(0x016A9D10, app::Object *, DeserializeObject_3, (app::String * json, app::IJsonSerializerStrategy * json_serializer_strategy));
    IL2CPP_REGISTER_METHOD(0x016A9D10, app::JsonObject *, DeserializeObject_4, (app::String * json, app::IJsonSerializerStrategy * json_serializer_strategy));
    IL2CPP_REGISTER_METHODINFO(0x047283A0, PlayFabSimpleJson_DeserializeObject_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x016A9BD0, bool, DeserializeObject_5, (app::String * json, app::IJsonSerializerStrategy * json_serializer_strategy));
}
