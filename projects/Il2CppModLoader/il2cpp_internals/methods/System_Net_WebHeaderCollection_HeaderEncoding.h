using namespace app;

namespace app::methods::System::Net::WebHeaderCollection_HeaderEncoding {
IL2CPP_REGISTER_METHOD(0x01D77690, String *, GetString, (Byte__Array * bytes, int32_t byteIndex, int32_t byteCount));
IL2CPP_REGISTER_METHOD(0x01D776C0, String *, GetString, (uint8_t * pBytes, int32_t byteCount));
IL2CPP_REGISTER_METHOD(0x01D77810, int32_t, GetByteCount, (String * myString));
IL2CPP_REGISTER_METHOD(0x01D77830, void, GetBytes, (String * myString, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHOD(0x01D778C0, Byte__Array *, GetBytes, (String * myString));
IL2CPP_REGISTER_METHOD(0x01D779B0, String *, DecodeUtf8FromString, (String * input));
}
