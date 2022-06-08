#include <interception_macros.h>

namespace app::methods::System::Net::SecurityBuffer {
IL2CPP_REGISTER_METHOD(0x01BD2F00, void, __ctor, (SecurityBuffer * __this, Byte__Array * data, int32_t offset, int32_t size, BufferType__Enum tokentype));
IL2CPP_REGISTER_METHOD(0x01BD3030, void, __ctor, (SecurityBuffer * __this, Byte__Array * data, BufferType__Enum tokentype));
IL2CPP_REGISTER_METHOD(0x01BD3070, void, __ctor, (SecurityBuffer * __this, int32_t size, BufferType__Enum tokentype));
IL2CPP_REGISTER_METHOD(0x01BD3130, void, __ctor, (SecurityBuffer * __this, ChannelBinding * binding));
}
