using namespace app;

namespace app::methods::Moon::Network::Web::Json_Serializer {
IL2CPP_REGISTER_METHOD(0x02E94940, void, __ctor, (Json_Serializer * __this));
IL2CPP_REGISTER_METHOD(0x02E94A90, String *, Serialize, (Object * obj));
IL2CPP_REGISTER_METHOD(0x02E94D20, void, SerializeValue, (Json_Serializer * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02E94F40, void, SerializeObject, (Json_Serializer * __this, IDictionary * obj));
IL2CPP_REGISTER_METHOD(0x02E952B0, void, SerializeArray, (Json_Serializer * __this, IList * anArray));
IL2CPP_REGISTER_METHOD(0x02E95580, void, SerializeString, (Json_Serializer * __this, String * str));
IL2CPP_REGISTER_METHOD(0x02E958E0, void, SerializeOther, (Json_Serializer * __this, Object * value));
}
