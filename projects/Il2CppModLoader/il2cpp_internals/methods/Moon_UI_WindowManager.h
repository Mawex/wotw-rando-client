#include <interception_macros.h>

namespace app::methods::Moon::UI::WindowManager {
IL2CPP_REGISTER_METHOD(0x0118C190, WindowManager_1 *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x0118C2F0, void, FixedUpdate, (WindowManager_1 * __this));
IL2CPP_REGISTER_METHOD(0x0118C510, void, Register, (WindowManager_1 * __this, Window * window));
IL2CPP_REGISTER_METHOD(0x0118C6C0, void, Release, (WindowManager_1 * __this, Window * window));
IL2CPP_REGISTER_METHOD(0x0118C860, void, __ctor, (WindowManager_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
