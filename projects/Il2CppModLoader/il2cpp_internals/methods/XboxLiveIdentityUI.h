#include <interception_macros.h>

namespace app::methods::XboxLiveIdentityUI {
IL2CPP_REGISTER_METHOD(0x00594530, bool, get_IsGrdk, (XboxLiveIdentityUI * __this));
IL2CPP_REGISTER_METHOD(0x005945F0, void, Awake, (XboxLiveIdentityUI * __this));
IL2CPP_REGISTER_METHOD(0x005947B0, void, OnDestroy, (XboxLiveIdentityUI * __this));
IL2CPP_REGISTER_METHOD(0x00594970, void, OnEnable, (XboxLiveIdentityUI * __this));
IL2CPP_REGISTER_METHOD(0x00594FF0, void, OnUserChanged, (XboxLiveIdentityUI * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B418, XboxLiveIdentityUI_OnUserChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005952C0, void, SetupFromLiveAccount, (XboxLiveIdentityUI * __this, IPlatformUser * user));
IL2CPP_REGISTER_METHOD(0x00595950, void, Update, (XboxLiveIdentityUI * __this));
IL2CPP_REGISTER_METHOD(0x00596170, void, SignOutFlow, (XboxLiveIdentityUI * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsXbox, (XboxLiveIdentityUI * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (XboxLiveIdentityUI * __this));
}
