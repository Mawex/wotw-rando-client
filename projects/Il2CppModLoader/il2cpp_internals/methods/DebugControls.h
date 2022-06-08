#include <interception_macros.h>

namespace app::methods::DebugControls {
IL2CPP_REGISTER_METHOD(0x00DE1650, void, Update, (DebugControls * __this));
IL2CPP_REGISTER_METHOD(0x00DE3830, void, FixedUpdate, (DebugControls * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SendOneSteamTelemetry, (DebugControls * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SendTenSteamTelemetry, (DebugControls * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SendSteamTelemetry, (DebugControls * __this, int32_t repetition));
IL2CPP_REGISTER_METHOD(0x00DE3CE0, void, HandleQuickQuit, (DebugControls * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (DebugControls * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (DebugControls * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF3C0, SuspendableMask__Enum, get_Mask, (DebugControls * __this));
IL2CPP_REGISTER_METHOD(0x00DE3F20, void, set_Mask, (DebugControls * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00DE3FD0, void, __ctor, (DebugControls * __this));
}
