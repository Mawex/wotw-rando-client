#include <interception_macros.h>

namespace app::methods::MenuScreenStack {
IL2CPP_REGISTER_METHOD(0x009E6BB0, MenuScreen *, get_Top, (MenuScreenStack * __this));
IL2CPP_REGISTER_METHOD(0x009E6C50, void, Awake, (MenuScreenStack * __this));
IL2CPP_REGISTER_METHOD(0x009E6CE0, void, Push, (MenuScreenStack * __this, MenuScreen * menuScreen));
IL2CPP_REGISTER_METHOD(0x009E6DE0, void, Pop, (MenuScreenStack * __this));
IL2CPP_REGISTER_METHOD(0x009E6EC0, void, SuspendTop, (MenuScreenStack * __this));
IL2CPP_REGISTER_METHOD(0x009E70F0, void, ResumeTop, (MenuScreenStack * __this));
IL2CPP_REGISTER_METHOD(0x009E7320, void, Hide, (MenuScreenStack * __this, bool change));
IL2CPP_REGISTER_METHOD(0x009E7410, void, __ctor, (MenuScreenStack * __this));
}
