using namespace app;

namespace app::methods::System::Net::WebUtility_UrlDecoder {
IL2CPP_REGISTER_METHOD(0x021BB4D0, void, FlushBytes, (WebUtility_UrlDecoder * __this));
IL2CPP_REGISTER_METHOD(0x021BB540, void, __ctor, (WebUtility_UrlDecoder * __this, int32_t bufferSize, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x021BB5E0, void, AddChar, (WebUtility_UrlDecoder * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x021BB690, void, AddByte, (WebUtility_UrlDecoder * __this, uint8_t b));
IL2CPP_REGISTER_METHOD(0x021BB760, String *, GetString, (WebUtility_UrlDecoder * __this));
}
