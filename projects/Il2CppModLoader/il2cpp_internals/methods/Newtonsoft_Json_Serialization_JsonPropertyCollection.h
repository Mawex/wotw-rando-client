using namespace app;

namespace app::methods::Newtonsoft::Json::Serialization::JsonPropertyCollection {
IL2CPP_REGISTER_METHOD(0x01873320, void, __ctor, (JsonPropertyCollection * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00529D50, String *, GetKeyForItem, (JsonPropertyCollection * __this, JsonProperty * item));
IL2CPP_REGISTER_METHOD(0x01873470, void, AddProperty, (JsonPropertyCollection * __this, JsonProperty * property));
IL2CPP_REGISTER_METHODINFO(0x04730000, JsonPropertyCollection_AddProperty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018739A0, JsonProperty *, GetClosestMatchProperty, (JsonPropertyCollection * __this, String * propertyName));
IL2CPP_REGISTER_METHOD(0x018739E0, bool, TryGetValue, (JsonPropertyCollection * __this, String * key, JsonProperty * * item));
IL2CPP_REGISTER_METHOD(0x01873B10, JsonProperty *, GetProperty, (JsonPropertyCollection * __this, String * propertyName, StringComparison__Enum comparisonType));
}
