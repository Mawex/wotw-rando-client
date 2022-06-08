#include <interception_macros.h>

namespace app::methods::PositionCheckerPlugin {
IL2CPP_REGISTER_METHOD(0x00C675B0, void, Awake, (PositionCheckerPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00C67670, void, PlayCycle, (PositionCheckerPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (PositionCheckerPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00C68170, void, Exit, (PositionCheckerPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00C68210, void, OnGUI, (PositionCheckerPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00C68650, void, __ctor, (PositionCheckerPlugin * __this));
}
