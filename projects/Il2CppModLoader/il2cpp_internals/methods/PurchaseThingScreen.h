#include <interception_macros.h>

namespace app::methods::PurchaseThingScreen {
IL2CPP_REGISTER_METHOD(0x00420EE0, CleverMenuItemSelectionManager *, get_NavigationManager, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x006514B0, bool, get_IsShopOpen, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C80ED0, float, get_VisualProgress, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C80EF0, void, OnEnable, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C81010, void, Hide, (PurchaseThingScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x00C810E0, void, OnNewItemHighlightedResetProgress, (PurchaseThingScreen * __this, bool firstAfterPopulating));
IL2CPP_REGISTER_METHODINFO(0x0478F3A0, PurchaseThingScreen_OnNewItemHighlightedResetProgress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C810F0, void, PurchaseInput, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C815A0, void, CancelPurchaseInProgress, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C815B0, void, PurchaseIncrease, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C81700, void, PurchaseDecay, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C81870, void, InternalComplete, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C81B50, void, PurchaseBegin, (PurchaseThingScreen * __this));
IL2CPP_REGISTER_METHOD(0x00C81B90, void, __ctor, (PurchaseThingScreen * __this));
}
