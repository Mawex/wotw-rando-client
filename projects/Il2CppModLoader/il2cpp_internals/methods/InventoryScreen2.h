#include <interception_macros.h>

namespace app::methods::InventoryScreen2 {
IL2CPP_REGISTER_METHOD(0x00640F90, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00641010, InventoryScreenItem *, get_SelectedItem, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x006410F0, MenuTabBackground__Enum, get_BackgroundMode, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00641100, void, Awake, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00641330, void, OnDestroy, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00641690, void, OnBackPressed, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHODINFO(0x047519D8, InventoryScreen2_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00641750, void, OnGCTriggerEnter, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B780, InventoryScreen2_OnGCTriggerEnter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006417F0, void, Hide, (InventoryScreen2 * __this, bool change));
IL2CPP_REGISTER_METHOD(0x00641840, void, DeregisterCallbacks, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00641B10, void, HideImmediate, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00641B40, void, Show, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00641C80, void, RegisterCallbacks, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00641F50, void, ShowImmediate, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00641F90, void, OnNavigate, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHODINFO(0x04792710, InventoryScreen2_OnNavigate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00642130, void, OnShow, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x006422A0, void, UpdateText, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPressed, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHODINFO(0x04753190, InventoryScreen2_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006428A0, void, OnPostTimeSlicedEnable, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x006429B0, void, OnInstantiate, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00642DF0, void, FixedUpdate, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x00642ED0, void, UpdateHint, (InventoryScreen2 * __this));
IL2CPP_REGISTER_METHOD(0x006435D0, void, __ctor, (InventoryScreen2 * __this));
}
