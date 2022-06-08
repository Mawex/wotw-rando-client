using namespace app;

namespace app::methods::PlayFab::Json::PlayFabSimpleJson {
IL2CPP_REGISTER_METHOD(0x01848270, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x018487B0, Object *, DeserializeObject, (String * json));
IL2CPP_REGISTER_METHODINFO(0x04726788, PlayFabSimpleJson_DeserializeObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01848930, bool, TryDeserializeObject, (String * json, Object * * obj));
IL2CPP_REGISTER_METHOD(0x01848A20, Object *, DeserializeObject, (String * json, Type * type, IJsonSerializerStrategy * jsonSerializerStrategy));
IL2CPP_REGISTER_METHOD(0x01848D00, String *, SerializeObject, (Object * json, IJsonSerializerStrategy * jsonSerializerStrategy));
IL2CPP_REGISTER_METHOD(0x018490A0, String *, EscapeToJavascriptString, (String * jsonString));
IL2CPP_REGISTER_METHOD(0x01849390, IDictionary_2_System_String_System_Object_ *, ParseObject, (String * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x01849660, JsonArray *, ParseArray, (String * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x018498B0, Object *, ParseValue, (String * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x01849B40, String *, ParseString, (String * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x0184A6B0, String *, ConvertFromUtf32, (int32_t utf32));
IL2CPP_REGISTER_METHODINFO(0x047693B8, PlayFabSimpleJson_ConvertFromUtf32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0184A870, Object *, ParseNumber, (String * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x0184AC70, int32_t, GetLastIndexOfNumber, (String * json, int32_t index));
IL2CPP_REGISTER_METHOD(0x0184AD50, void, EatWhitespace, (String * json, int32_t * index));
IL2CPP_REGISTER_METHOD(0x0184AE30, PlayFabSimpleJson_TokenType__Enum, LookAhead, (String * json, int32_t index));
IL2CPP_REGISTER_METHOD(0x0184AEE0, PlayFabSimpleJson_TokenType__Enum, NextToken, (String * json, int32_t * index));
IL2CPP_REGISTER_METHOD(0x0184B240, bool, SerializeValue, (IJsonSerializerStrategy * jsonSerializerStrategy, Object * value, StringBuilder * builder));
IL2CPP_REGISTER_METHOD(0x0184B8B0, bool, SerializeObject, (IJsonSerializerStrategy * jsonSerializerStrategy, IEnumerable * keys, IEnumerable * values, StringBuilder * builder));
IL2CPP_REGISTER_METHOD(0x0184BB40, bool, SerializeArray, (IJsonSerializerStrategy * jsonSerializerStrategy, IEnumerable * anArray, StringBuilder * builder));
IL2CPP_REGISTER_METHOD(0x0184BDB0, bool, SerializeString, (String * aString, StringBuilder * builder));
IL2CPP_REGISTER_METHOD(0x0184C0E0, bool, SerializeNumber, (Object * number, StringBuilder * builder));
IL2CPP_REGISTER_METHOD(0x0184C3F0, bool, IsNumeric, (Object * value));
IL2CPP_REGISTER_METHOD(0x0184C570, IJsonSerializerStrategy *, get_CurrentJsonSerializerStrategy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0184C640, void, set_CurrentJsonSerializerStrategy, (IJsonSerializerStrategy * value));
IL2CPP_REGISTER_METHOD(0x0184C6F0, PocoJsonSerializerStrategy *, get_PocoJsonSerializerStrategy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016A9D10, Object *, DeserializeObject, (String * json, IJsonSerializerStrategy * jsonSerializerStrategy));
IL2CPP_REGISTER_METHOD(0x016A9D10, JsonObject *, DeserializeObject, (String * json, IJsonSerializerStrategy * jsonSerializerStrategy));
IL2CPP_REGISTER_METHODINFO(0x047283A0, PlayFabSimpleJson_DeserializeObject_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016A9BD0, bool, DeserializeObject, (String * json, IJsonSerializerStrategy * jsonSerializerStrategy));
}
