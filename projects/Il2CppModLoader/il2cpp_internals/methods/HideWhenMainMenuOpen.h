#include <interception_macros.h>

namespace app::methods::HideWhenMainMenuOpen {
IL2CPP_REGISTER_METHOD(0x00B4AC90, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00B4AD60, void, OnMenuShow, ());
IL2CPP_REGISTER_METHOD(0x00B4AEE0, void, OnMenuHide, ());
IL2CPP_REGISTER_METHOD(0x00B4B060, void, Awake, (HideWhenMainMenuOpen * __this));
IL2CPP_REGISTER_METHOD(0x00B4B1F0, void, OnDestroy, (HideWhenMainMenuOpen * __this));
IL2CPP_REGISTER_METHOD(0x00B4B2D0, void, MakeVisible, (HideWhenMainMenuOpen * __this));
IL2CPP_REGISTER_METHOD(0x00B4B450, void, MakeInvisible, (HideWhenMainMenuOpen * __this));
IL2CPP_REGISTER_METHOD(0x00B4B5C0, bool, get_MainMenuVisible, (HideWhenMainMenuOpen * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (HideWhenMainMenuOpen * __this));
IL2CPP_REGISTER_METHOD(0x00B4B650, void, __cctor, ());
}
