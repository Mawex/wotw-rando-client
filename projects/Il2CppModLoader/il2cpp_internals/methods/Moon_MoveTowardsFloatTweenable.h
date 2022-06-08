#include <interception_macros.h>

namespace app::methods::Moon::MoveTowardsFloatTweenable {
IL2CPP_REGISTER_METHOD(0x01BAB1E0, float, Update, (MoveTowardsFloatTweenable * __this, float currentValue, float startValue, float endValue, float speed));
IL2CPP_REGISTER_METHOD(0x01BAB2C0, bool, HasFinished, (MoveTowardsFloatTweenable * __this, float currentValue, float startValue, float endValue, float speed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoveTowardsFloatTweenable * __this));
}
