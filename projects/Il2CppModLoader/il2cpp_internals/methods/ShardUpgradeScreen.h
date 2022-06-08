using namespace app;

namespace app::methods::ShardUpgradeScreen {
IL2CPP_REGISTER_METHOD(0x005B0220, ShopkeeperItem__Array *, get_Items, (ShardUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x005B0230, ShardUpgradeScreen *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x005B02B0, void, set_Instance, (ShardUpgradeScreen * value));
IL2CPP_REGISTER_METHOD(0x005B0340, ShopkeeperScreen *, get_ShopInstance, (ShardUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x005B0350, void, set_ShopInstance, (ShardUpgradeScreen * __this, ShopkeeperScreen * value));
IL2CPP_REGISTER_METHOD(0x00572C30, Event_1 *, get_PurchaseBeginSound, (ShardUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572C50, Event_1 *, get_PurchaseCompleteSound, (ShardUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x00572C70, RTPC *, get_PurchaseRTPC, (ShardUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x005B0490, bool, AdditionalUpdate, (ShardUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x005B05C0, void, Init, (ShardUpgradeScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418B30, void, __ctor, (ShardUpgradeScreen * __this));
}
