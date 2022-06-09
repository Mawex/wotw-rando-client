#include <interception_macros.h>

namespace app::methods::System::Net::SecurityBuffer {
    IL2CPP_REGISTER_METHOD(0x01BD2F00, void, __ctor_1, (app::SecurityBuffer * this_ptr, app::Byte__Array * data, int32_t offset, int32_t size, app::BufferType__Enum tokentype));
    IL2CPP_REGISTER_METHOD(0x01BD3030, void, __ctor_2, (app::SecurityBuffer * this_ptr, app::Byte__Array * data, app::BufferType__Enum tokentype));
    IL2CPP_REGISTER_METHOD(0x01BD3070, void, __ctor_3, (app::SecurityBuffer * this_ptr, int32_t size, app::BufferType__Enum tokentype));
    IL2CPP_REGISTER_METHOD(0x01BD3130, void, __ctor_4, (app::SecurityBuffer * this_ptr, app::ChannelBinding * binding));
}
