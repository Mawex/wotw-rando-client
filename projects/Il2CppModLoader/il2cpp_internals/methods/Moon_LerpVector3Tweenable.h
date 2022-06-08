#include <interception_macros.h>

namespace app::methods::Moon::LerpVector3Tweenable {
IL2CPP_REGISTER_METHOD(0x01BAA680, Vector3, Update, (LerpVector3Tweenable * __this, Vector3 startValue, Vector3 endValue, float normalizedInput));
IL2CPP_REGISTER_METHOD(0x01BAA670, bool, HasFinished, (LerpVector3Tweenable * __this, Vector3 currentValue, Vector3 endValue, float normalizedInput));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LerpVector3Tweenable * __this));
}
