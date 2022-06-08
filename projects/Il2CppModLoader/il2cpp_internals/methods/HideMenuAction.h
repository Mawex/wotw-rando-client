#include <interception_macros.h>

namespace app::methods::HideMenuAction {
IL2CPP_REGISTER_METHOD(0x00B493C0, bool, get_ShouldSKipUiBackgroundBlur, (HideMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00B49480, void, Perform, (HideMenuAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B494A0, void, Awake, (HideMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00B49540, void, OnEnable, (HideMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00B49760, void, OnDisable, (HideMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00B49820, void, FixedUpdate, (HideMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00B49890, void, EnableBackground, (HideMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00B49BE0, void, DisableBackground, (HideMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00B4A020, void, __ctor, (HideMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
