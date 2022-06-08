#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Switch {
IL2CPP_REGISTER_METHOD(0x02004A20, void, __ctor, (Switch * __this, String * displayName, String * description));
IL2CPP_REGISTER_METHOD(0x02004AD0, void, __ctor, (Switch * __this, String * displayName, String * description, String * defaultSwitchValue));
IL2CPP_REGISTER_METHOD(0x02004DD0, void, _pruneCachedSwitches, ());
IL2CPP_REGISTER_METHOD(0x020053C0, void, __cctor, ());
}
