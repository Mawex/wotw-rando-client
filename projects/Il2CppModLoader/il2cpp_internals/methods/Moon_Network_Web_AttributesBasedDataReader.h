using namespace app;

namespace app::methods::Moon::Network::Web::AttributesBasedDataReader {
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetRequest, (AttributesBasedDataReader * __this, IRequest * request));
IL2CPP_REGISTER_METHOD(0x02E92110, void, CreateBody, (AttributesBasedDataReader * __this));
IL2CPP_REGISTER_METHOD(0x02E92440, void, AddToBody, (AttributesBasedDataReader * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IgnoreNullValues, (AttributesBasedDataReader * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IgnoreNullValues, (AttributesBasedDataReader * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02E92500, Dictionary_2_System_String_System_Object_ *, get_Body, (AttributesBasedDataReader * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AttributesBasedDataReader * __this));
}
