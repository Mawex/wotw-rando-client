using namespace app;

namespace app::methods::Newtonsoft::Json::JsonPosition {
IL2CPP_REGISTER_METHOD(0x00167100, void, __ctor, (JsonPosition__Boxed * __this, JsonContainerType__Enum type));
IL2CPP_REGISTER_METHOD(0x00167110, int32_t, CalculateLength, (JsonPosition__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F468, JsonPosition_CalculateLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00167120, void, WriteTo, (JsonPosition__Boxed * __this, StringBuilder * sb, StringWriter * * writer, Char__Array * * buffer));
IL2CPP_REGISTER_METHOD(0x01A65FC0, bool, TypeHasIndex, (JsonContainerType__Enum type));
IL2CPP_REGISTER_METHOD(0x01A65FD0, String *, BuildPath, (List_1_Newtonsoft_Json_JsonPosition_ * positions, Nullable_1_Newtonsoft_Json_JsonPosition_ currentPosition));
IL2CPP_REGISTER_METHOD(0x01A66390, String *, FormatMessage, (IJsonLineInfo * lineInfo, String * path, String * message));
IL2CPP_REGISTER_METHOD(0x01A666A0, void, __cctor, (MethodInfo * method));
}
