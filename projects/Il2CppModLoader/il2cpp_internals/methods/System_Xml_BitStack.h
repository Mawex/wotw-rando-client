#include <interception_macros.h>

namespace app::methods::System::Xml::BitStack {
IL2CPP_REGISTER_METHOD(0x021E7820, void, __ctor, (BitStack * __this));
IL2CPP_REGISTER_METHOD(0x021E7830, void, PushBit, (BitStack * __this, bool bit));
IL2CPP_REGISTER_METHOD(0x021E7980, bool, PopBit, (BitStack * __this));
IL2CPP_REGISTER_METHOD(0x021E79F0, bool, PeekBit, (BitStack * __this));
IL2CPP_REGISTER_METHOD(0x021E7A00, void, PushCurr, (BitStack * __this));
IL2CPP_REGISTER_METHOD(0x021E7B20, void, PopCurr, (BitStack * __this));
}
