#include <interception_macros.h>

namespace app::methods::CartBashPush {
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_BashPriority, (CartBashPush * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, (CartBashPush * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (CartBashPush * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (CartBashPush * __this));
IL2CPP_REGISTER_METHOD(0x00B328E0, void, OnRecieveDamage, (CartBashPush * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CartBashPush * __this));
}
