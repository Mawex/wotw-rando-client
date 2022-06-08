#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::Base64Encoder {
IL2CPP_REGISTER_METHOD(0x01BFFFC0, void, __ctor, (Base64Encoder_1 * __this, TextWriter * writer));
IL2CPP_REGISTER_METHOD(0x01C00070, void, ValidateEncode, (Base64Encoder_1 * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04760F88, Base64Encoder_1_ValidateEncode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C001E0, void, Encode, (Base64Encoder_1 * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01C00680, void, StoreLeftOverBytes, (Base64Encoder_1 * __this, Byte__Array * buffer, int32_t index, int32_t * count));
IL2CPP_REGISTER_METHOD(0x01C007C0, bool, FulfillFromLeftover, (Base64Encoder_1 * __this, Byte__Array * buffer, int32_t index, int32_t * count));
IL2CPP_REGISTER_METHOD(0x01C00880, void, Flush, (Base64Encoder_1 * __this));
IL2CPP_REGISTER_METHOD(0x01C00990, void, WriteChars, (Base64Encoder_1 * __this, Char__Array * chars, int32_t index, int32_t count));
}
