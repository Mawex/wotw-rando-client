#pragma once
#include <interception_macros.h>

namespace app::methods::PurchaseThingScreen {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CleverMenuItemSelectionManager *, get_NavigationManager, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006514B0, bool, get_IsShopOpen, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C80ED0, float, get_VisualProgress, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C80EF0, void, OnEnable, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C81010, void, Hide, (app::PurchaseThingScreen * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x00C810E0, void, OnNewItemHighlightedResetProgress, (app::PurchaseThingScreen * this_ptr, bool first_after_populating))
    IL2CPP_REGISTER_METHODINFO(0x0478F3A0, PurchaseThingScreen_OnNewItemHighlightedResetProgress__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C810F0, void, PurchaseInput, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C815A0, void, CancelPurchaseInProgress, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C815B0, void, PurchaseIncrease, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C81700, void, PurchaseDecay, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C81870, void, InternalComplete, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C81B50, void, PurchaseBegin, (app::PurchaseThingScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C81B90, void, ctor, (app::PurchaseThingScreen * this_ptr))
}
