#include <interception_macros.h>

namespace app::methods::InventoryManager {
IL2CPP_REGISTER_METHOD(0x0063F0E0, void, Show, (InventoryManager * __this));
IL2CPP_REGISTER_METHOD(0x0063F120, void, Hide, (InventoryManager * __this, bool change));
IL2CPP_REGISTER_METHOD(0x0063F150, void, ShowImmediate, (InventoryManager * __this));
IL2CPP_REGISTER_METHOD(0x0063F190, void, HideImmediate, (InventoryManager * __this));
IL2CPP_REGISTER_METHOD(0x0063F1C0, void, Awake, (InventoryManager * __this));
IL2CPP_REGISTER_METHOD(0x0063F6F0, void, OnBackPressed, (InventoryManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04773CE0, InventoryManager_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnMenuItemChange, (InventoryManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04711060, InventoryManager_OnMenuItemChange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0063F7A0, void, OnMenuItemPressed, (InventoryManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04766960, InventoryManager_OnMenuItemPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0063FE00, void, OnMessageScreenHide, (InventoryManager * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x0476F248, InventoryManager_OnMessageScreenHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00640000, void, OnDestroy, (InventoryManager * __this));
IL2CPP_REGISTER_METHOD(0x00640580, void, OnDifficultyChanged, (InventoryManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0472D420, InventoryManager_OnDifficultyChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00640650, void, UpdateItems, (InventoryManager * __this));
IL2CPP_REGISTER_METHOD(0x00640F80, void, FixedUpdate, (InventoryManager * __this));
IL2CPP_REGISTER_METHOD(0x00640F80, void, OnEnable, (InventoryManager * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (InventoryManager * __this));
}
