using namespace app;

namespace app::methods::WeaponmasterScreen {
IL2CPP_REGISTER_METHOD(0x00418200, ShopkeeperItem__Array *, get_Items, (WeaponmasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x005729D0, WeaponmasterScreen *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00572A50, void, set_Instance, (WeaponmasterScreen * value));
IL2CPP_REGISTER_METHOD(0x00572AE0, ShopkeeperScreen *, get_ShopInstance, (WeaponmasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572AF0, void, set_ShopInstance, (WeaponmasterScreen * __this, ShopkeeperScreen * value));
IL2CPP_REGISTER_METHOD(0x00572C30, Event_1 *, get_PurchaseBeginSound, (WeaponmasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572C50, Event_1 *, get_PurchaseCompleteSound, (WeaponmasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572C70, RTPC *, get_PurchaseRTPC, (WeaponmasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572C90, void, Init, (WeaponmasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00573000, float, GetAllUpgradesProgress, (WeaponmasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418B30, void, __ctor, (WeaponmasterScreen * __this));
}
