#include <interception_macros.h>

namespace app::methods::System::Xml::ByteStack {
IL2CPP_REGISTER_METHOD(0x021E7EE0, void, __ctor, (ByteStack * __this, int32_t growthRate));
IL2CPP_REGISTER_METHOD(0x021E7F80, void, Push, (ByteStack * __this, uint8_t data));
IL2CPP_REGISTER_METHOD(0x021E8090, uint8_t, Pop, (ByteStack * __this));
}
