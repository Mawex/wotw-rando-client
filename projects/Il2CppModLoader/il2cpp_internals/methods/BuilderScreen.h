#include <interception_macros.h>

namespace app::methods::BuilderScreen {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedOreUI, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418200, ShopkeeperItem__Array *, get_Items, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x0081C600, BuilderScreen *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x0081C680, void, set_Instance, (BuilderScreen * value));
IL2CPP_REGISTER_METHOD(0x0081C710, ShopkeeperScreen *, get_ShopInstance, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x0081C720, void, set_ShopInstance, (BuilderScreen * __this, ShopkeeperScreen * value));
IL2CPP_REGISTER_METHOD(0x0081C860, Event_1 *, get_PurchaseBeginSound, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x0081C880, Event_1 *, get_PurchaseCompleteSound, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x0081C8A0, RTPC *, get_PurchaseRTPC, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x004184D0, NpcProjectItem *, get_CurrentProject, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x0081C8C0, void, Init, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418920, float, GetAllProjectsProgress, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x0081CC30, void, CompletePurchase, (BuilderScreen * __this));
IL2CPP_REGISTER_METHOD(0x00418B30, void, __ctor, (BuilderScreen * __this));
}
