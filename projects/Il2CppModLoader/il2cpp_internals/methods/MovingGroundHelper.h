#include <interception_macros.h>

namespace app::methods::MovingGroundHelper {
IL2CPP_REGISTER_METHOD(0x0086D250, void, SetGround, (MovingGroundHelper * __this, Transform * ground));
IL2CPP_REGISTER_METHOD(0x0086D320, Vector2, CalculateDelta, (MovingGroundHelper * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x0086D6E0, void, Update, (MovingGroundHelper * __this));
IL2CPP_REGISTER_METHOD(0x0086D6F0, void, UpdateGroundMatrix, (MovingGroundHelper * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MovingGroundHelper * __this));
}
