#include <interception_macros.h>

namespace app::methods::Moon::MoveTowardsVector3Tweenable {
IL2CPP_REGISTER_METHOD(0x01BAB570, Vector3, Update, (MoveTowardsVector3Tweenable * __this, Vector3 currentValue, Vector3 startValue, Vector3 endValue, float speed));
IL2CPP_REGISTER_METHOD(0x01BAB780, bool, HasFinished, (MoveTowardsVector3Tweenable * __this, Vector3 currentValue, Vector3 startValue, Vector3 endValue, float speed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoveTowardsVector3Tweenable * __this));
}
