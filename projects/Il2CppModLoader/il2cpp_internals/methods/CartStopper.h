#include <interception_macros.h>

namespace app::methods::CartStopper {
IL2CPP_REGISTER_METHOD(0x00B3F810, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00B3F8E0, bool, InsideCartStopper, (Vector3 position, Vector3 direction, bool * doesContain));
IL2CPP_REGISTER_METHOD(0x00B3FBE0, bool, InsideCartStopper, (Rect cartBounds, CartStopper * * stopper));
IL2CPP_REGISTER_METHOD(0x00B3FE30, void, Awake, (CartStopper * __this));
IL2CPP_REGISTER_METHOD(0x00B40050, void, OnDestroy, (CartStopper * __this));
IL2CPP_REGISTER_METHOD(0x00B40130, void, ForceCartActivation, (CartStopper * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (CartStopper * __this));
IL2CPP_REGISTER_METHOD(0x00B40400, void, __ctor, (CartStopper * __this));
IL2CPP_REGISTER_METHOD(0x00B40490, void, __cctor, ());
}
