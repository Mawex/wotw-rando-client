#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Linq::JProperty {
IL2CPP_REGISTER_METHOD(0x002FBB60, IList_1_Newtonsoft_Json_Linq_JToken_ *, get_ChildrenTokens, (JProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, String *, get_Name, (JProperty * __this));
IL2CPP_REGISTER_METHOD(0x01F0CFD0, JToken *, get_Value, (JProperty * __this));
IL2CPP_REGISTER_METHOD(0x01F0CFF0, void, set_Value, (JProperty * __this, JToken * value));
IL2CPP_REGISTER_METHOD(0x01F0D070, void, __ctor, (JProperty * __this, JProperty * other));
IL2CPP_REGISTER_METHOD(0x01F0D1D0, JToken *, GetItem, (JProperty * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473FE40, JProperty_GetItem__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F0D290, void, SetItem, (JProperty * __this, int32_t index, JToken * item));
IL2CPP_REGISTER_METHODINFO(0x0470D578, JProperty_SetItem__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F0D3D0, bool, RemoveItem, (JProperty * __this, JToken * item));
IL2CPP_REGISTER_METHODINFO(0x047932E0, JProperty_RemoveItem__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F0D4E0, void, RemoveItemAt, (JProperty * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0477A8C8, JProperty_RemoveItemAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F0D5F0, int32_t, IndexOfItem, (JProperty * __this, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F0D620, void, InsertItem, (JProperty * __this, int32_t index, JToken * item, bool skipParentCheck));
IL2CPP_REGISTER_METHODINFO(0x047486A0, JProperty_InsertItem__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F0D790, bool, ContainsItem, (JProperty * __this, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F0D7B0, void, ClearItems, (JProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x047637C8, JProperty_ClearItems__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F0D8C0, JToken *, CloneToken, (JProperty * __this));
IL2CPP_REGISTER_METHOD(0x00910BD0, JTokenType__Enum, get_Type, (JProperty * __this));
IL2CPP_REGISTER_METHOD(0x01F0DB40, void, __ctor, (JProperty * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01F0DCA0, void, __ctor, (JProperty * __this, String * name, Object * content));
IL2CPP_REGISTER_METHOD(0x01F0DF10, void, WriteTo, (JProperty * __this, JsonWriter * writer, JsonConverter__Array * converters));
IL2CPP_REGISTER_METHOD(0x01F0DFB0, JProperty *, Load, (JsonReader * reader, JsonLoadSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0475D238, JProperty_Load__MethodInfo);
}
