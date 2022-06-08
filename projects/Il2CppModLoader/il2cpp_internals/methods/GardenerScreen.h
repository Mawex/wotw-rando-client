using namespace app;

namespace app::methods::GardenerScreen {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418200, ShopkeeperItem__Array *, get_Items, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418210, GardenerScreen *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00418290, void, set_Instance, (GardenerScreen * value));
IL2CPP_REGISTER_METHOD(0x00418320, ShopkeeperScreen *, get_ShopInstance, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418330, void, set_ShopInstance, (GardenerScreen * __this, ShopkeeperScreen * value));
IL2CPP_REGISTER_METHOD(0x00418470, Event_1 *, get_PurchaseBeginSound, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418490, Event_1 *, get_PurchaseCompleteSound, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x004184B0, RTPC *, get_PurchaseRTPC, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x004184D0, NpcProjectItem *, get_CurrentProject, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x004185B0, void, Init, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418920, float, GetAllProjectsProgress, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418A60, void, CompletePurchase, (GardenerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418B30, void, __ctor, (GardenerScreen * __this));
}
