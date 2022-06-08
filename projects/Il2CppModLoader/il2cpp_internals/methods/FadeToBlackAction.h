#include <interception_macros.h>

namespace app::methods::FadeToBlackAction {
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Duration, (FadeToBlackAction * __this));
IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_Duration, (FadeToBlackAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x0098F5F0, void, Perform, (FadeToBlackAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (FadeToBlackAction * __this));
IL2CPP_REGISTER_METHOD(0x0098F710, bool, get_IsPerforming, (FadeToBlackAction * __this));
IL2CPP_REGISTER_METHOD(0x0098F7D0, String *, GetNiceName, (FadeToBlackAction * __this));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (FadeToBlackAction * __this));
}
