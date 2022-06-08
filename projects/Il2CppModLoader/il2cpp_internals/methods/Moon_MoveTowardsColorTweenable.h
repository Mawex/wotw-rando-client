#include <interception_macros.h>

namespace app::methods::Moon::MoveTowardsColorTweenable {
IL2CPP_REGISTER_METHOD(0x01BAAF40, Color, Update, (MoveTowardsColorTweenable * __this, Color currentValue, Color startValue, Color endValue, float speed));
IL2CPP_REGISTER_METHOD(0x01BAB0D0, bool, HasFinished, (MoveTowardsColorTweenable * __this, Color currentValue, Color startValue, Color endValue, float speed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoveTowardsColorTweenable * __this));
}
