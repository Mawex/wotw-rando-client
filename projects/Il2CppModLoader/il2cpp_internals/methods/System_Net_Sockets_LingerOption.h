#include <interception_macros.h>

namespace app::methods::System::Net::Sockets::LingerOption {
IL2CPP_REGISTER_METHOD(0x01BE0270, void, __ctor, (LingerOption * __this, bool enable, int32_t seconds));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Enabled, (LingerOption * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_LingerTime, (LingerOption * __this, int32_t value));
}
