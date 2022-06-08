#include <interception_macros.h>

namespace app::methods::System::Net::Http::HttpContent_FixedMemoryStream {
IL2CPP_REGISTER_METHOD(0x02D1B5E0, void, CheckOverflow, (HttpContent_FixedMemoryStream * __this, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047303E0, HttpContent_FixedMemoryStream_CheckOverflow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D1B6E0, void, WriteByte, (HttpContent_FixedMemoryStream * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x02D1B7E0, void, Write, (HttpContent_FixedMemoryStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
}
