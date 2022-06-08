#include <interception_macros.h>

namespace app::methods::J2i::Net::XInputWrapper::XInput {
IL2CPP_REGISTER_METHOD(0x031B8670, int32_t, XInputGetState, (int32_t dwUserIndex, XInputState * pState));
IL2CPP_REGISTER_METHOD(0x031B8720, int32_t, XInputSetState, (int32_t dwUserIndex, XInputVibration * pVibration));
}
