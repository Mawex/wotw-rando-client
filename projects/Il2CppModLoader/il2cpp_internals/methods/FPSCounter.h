#include <interception_macros.h>

namespace app::methods::FPSCounter {
IL2CPP_REGISTER_METHOD(0x00988580, void, Start, (FPSCounter * __this));
IL2CPP_REGISTER_METHOD(0x009886D0, void, FixedUpdate, (FPSCounter * __this));
IL2CPP_REGISTER_METHOD(0x009886E0, void, Update, (FPSCounter * __this));
IL2CPP_REGISTER_METHOD(0x00988C10, void, __ctor, (FPSCounter * __this));
}
