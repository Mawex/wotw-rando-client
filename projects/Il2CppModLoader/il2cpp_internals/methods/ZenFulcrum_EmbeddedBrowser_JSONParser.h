using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::JSONParser {
IL2CPP_REGISTER_METHOD(0x01DE3CA0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01DE3F50, JSONNode *, Parse, (String * json));
IL2CPP_REGISTER_METHODINFO(0x047398B8, JSONParser_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE40D0, bool, TryDeserializeObject, (String * json, JSONNode * * obj));
IL2CPP_REGISTER_METHOD(0x01DE41C0, String *, EscapeToJavascriptString, (String * jsonString));
IL2CPP_REGISTER_METHOD(0x01DE44B0, JSONNode *, ParseObject, (Char__Array * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x01DE47C0, JSONNode *, ParseArray, (Char__Array * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x01DE4A10, JSONNode *, ParseValue, (Char__Array * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x01DE4D40, JSONNode *, ParseString, (Char__Array * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x01DE5380, String *, ConvertFromUtf32, (int32_t utf32));
IL2CPP_REGISTER_METHODINFO(0x0474AAB0, JSONParser_ConvertFromUtf32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE5540, JSONNode *, ParseNumber, (Char__Array * json, int32_t * index, bool * success));
IL2CPP_REGISTER_METHOD(0x01DE59F0, int32_t, GetLastIndexOfNumber, (Char__Array * json, int32_t index));
IL2CPP_REGISTER_METHOD(0x01DE5AE0, void, EatWhitespace, (Char__Array * json, int32_t * index));
IL2CPP_REGISTER_METHOD(0x01DE5BD0, int32_t, LookAhead, (Char__Array * json, int32_t index));
IL2CPP_REGISTER_METHOD(0x01DE5C80, int32_t, NextToken, (Char__Array * json, int32_t * index));
IL2CPP_REGISTER_METHOD(0x01DE6090, String *, Serialize, (JSONNode * node));
IL2CPP_REGISTER_METHODINFO(0x04778EF8, JSONParser_Serialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE6260, bool, SerializeValue, (JSONNode * value, StringBuilder * builder));
IL2CPP_REGISTER_METHODINFO(0x047608A8, JSONParser_SerializeValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE66D0, bool, SerializeObject, (IEnumerable_1_System_String_ * keys, IEnumerable_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * values, StringBuilder * builder));
IL2CPP_REGISTER_METHOD(0x01DE6920, bool, SerializeArray, (IEnumerable_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * anArray, StringBuilder * builder));
IL2CPP_REGISTER_METHOD(0x01DE6B70, bool, SerializeString, (String * aString, StringBuilder * builder));
IL2CPP_REGISTER_METHOD(0x01DE6EA0, bool, SerializeNumber, (double number, StringBuilder * builder));
}
