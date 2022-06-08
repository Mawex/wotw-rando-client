#include <interception_macros.h>

namespace app::methods::MessageBoxMessageScreen {
IL2CPP_REGISTER_METHOD(0x01592840, bool, get_Visible, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x01592850, void, Awake, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x01592AA0, void, Start, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsSuspended, (MessageBoxMessageScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01592AD0, void, FixedUpdate, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x01592F10, void, ShowMessageScreen, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x01592F30, void, HideMessageScreen, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x01592F50, void, ResetWaitDuration, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x01592F60, void, ResetWaitDuration, (MessageBoxMessageScreen * __this, float waitDuration));
IL2CPP_REGISTER_METHOD(0x01592F80, void, HideImmediately, (MessageBoxMessageScreen * __this));
IL2CPP_REGISTER_METHOD(0x01592FB0, void, SetOpacity, (MessageBoxMessageScreen * __this, float opacity));
IL2CPP_REGISTER_METHOD(0x01593410, void, SetTexture, (MessageBoxMessageScreen * __this, Texture2D * texture));
IL2CPP_REGISTER_METHOD(0x015935B0, void, __ctor, (MessageBoxMessageScreen * __this));
}
