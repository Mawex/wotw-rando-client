using namespace app;

namespace app::methods::Moon::MoveTowardsQuaternionTweenable {
IL2CPP_REGISTER_METHOD(0x01BAB3B0, Quaternion, Update, (MoveTowardsQuaternionTweenable * __this, Quaternion currentValue, Quaternion startValue, Quaternion endValue, float speed));
IL2CPP_REGISTER_METHOD(0x01BAB4A0, bool, HasFinished, (MoveTowardsQuaternionTweenable * __this, Quaternion currentValue, Quaternion startValue, Quaternion endValue, float speed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoveTowardsQuaternionTweenable * __this));
}
