#include <interception_macros.h>

namespace app::methods::XboxLiveLoginScreen {
IL2CPP_REGISTER_METHOD(0x00596340, String *, get_Code, ());
IL2CPP_REGISTER_METHOD(0x005963C0, void, set_Code, (String * value));
IL2CPP_REGISTER_METHOD(0x00596450, String *, get_Url, ());
IL2CPP_REGISTER_METHOD(0x005964D0, void, set_Url, (String * value));
IL2CPP_REGISTER_METHOD(0x00596560, void, OnEnable, (XboxLiveLoginScreen * __this));
IL2CPP_REGISTER_METHOD(0x00596810, void, OnDisable, (XboxLiveLoginScreen * __this));
IL2CPP_REGISTER_METHOD(0x00596900, void, Update, (XboxLiveLoginScreen * __this));
IL2CPP_REGISTER_METHOD(0x00596D60, void, ShowHandler, (String * url, String * code, CancellationTokenSource * cancellationTokenSource));
IL2CPP_REGISTER_METHODINFO(0x0475BB10, XboxLiveLoginScreen_ShowHandler__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (XboxLiveLoginScreen * __this));
}
