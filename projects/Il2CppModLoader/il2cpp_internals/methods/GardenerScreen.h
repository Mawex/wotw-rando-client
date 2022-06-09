#include <interception_macros.h>

namespace app::methods::GardenerScreen {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00418200, ShopkeeperItem__Array *, get_Items, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00418210, GardenerScreen *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00418290, void, set_Instance, (app::GardenerScreen * value));
IL2CPP_REGISTER_METHOD(0x00418320, ShopkeeperScreen *, get_ShopInstance, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00418330, void, set_ShopInstance, (app::GardenerScreen * this_ptr, app::ShopkeeperScreen * value));
IL2CPP_REGISTER_METHOD(0x00418470, Event_1 *, get_PurchaseBeginSound, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00418490, Event_1 *, get_PurchaseCompleteSound, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x004184B0, RTPC *, get_PurchaseRTPC, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x004184D0, NpcProjectItem *, get_CurrentProject, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x004185B0, void, Init, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00418920, float, GetAllProjectsProgress, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00418A60, void, CompletePurchase, (app::GardenerScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00418B30, void, __ctor, (app::GardenerScreen * this_ptr));
}
