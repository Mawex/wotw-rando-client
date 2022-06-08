#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::HUDManager {
IL2CPP_REGISTER_METHOD(0x01DE0590, HUDManager *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01DE0610, void, set_Instance, (HUDManager * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Browser *, get_HUDBrowser, (HUDManager * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_HUDBrowser, (HUDManager * __this, Browser * value));
IL2CPP_REGISTER_METHOD(0x01DE0610, void, Awake, (HUDManager * __this));
IL2CPP_REGISTER_METHOD(0x01DE06A0, void, Start, (HUDManager * __this));
IL2CPP_REGISTER_METHOD(0x01DE0BC0, IEnumerator *, Rehide, (HUDManager * __this));
IL2CPP_REGISTER_METHOD(0x01DE0D00, void, Unpause, (HUDManager * __this));
IL2CPP_REGISTER_METHOD(0x01DE0F20, void, Pause, (HUDManager * __this));
IL2CPP_REGISTER_METHOD(0x01DE1140, void, Update, (HUDManager * __this));
IL2CPP_REGISTER_METHOD(0x01DE11C0, void, Say, (HUDManager * __this, String * html, float dwellTime));
IL2CPP_REGISTER_METHOD(0x01DE1360, void, EnableUserControls, (HUDManager * __this, bool enableIt));
IL2CPP_REGISTER_METHOD(0x01DE1480, void, LoadBrowseLevel, (HUDManager * __this, bool force));
IL2CPP_REGISTER_METHOD(0x01DE15F0, IEnumerator *, LoadLevel, (HUDManager * __this, bool force));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (HUDManager * __this));
IL2CPP_REGISTER_METHOD(0x01DE1750, void, _Start_b__11_0, (HUDManager * __this, JSONNode * args));
IL2CPP_REGISTER_METHODINFO(0x04704950, HUDManager__Start_b__11_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE1760, void, _Start_b__11_1, (HUDManager * __this, JSONNode * args));
IL2CPP_REGISTER_METHODINFO(0x0474D618, HUDManager__Start_b__11_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE18C0, void, _Start_b__11_3, (HUDManager * __this, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047803A8, HUDManager__Start_b__11_3__MethodInfo);
}
