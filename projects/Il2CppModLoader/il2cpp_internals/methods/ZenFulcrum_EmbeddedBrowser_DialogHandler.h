#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::DialogHandler {
IL2CPP_REGISTER_METHOD(0x01DD4430, DialogHandler *, Create, (Browser * parent, DialogHandler_DialogCallback * dialogCallback, DialogHandler_MenuCallback * contextCallback));
IL2CPP_REGISTER_METHOD(0x01DD49E0, void, HandleDialog, (DialogHandler * __this, BrowserNative_DialogType__Enum type, String * text, String * promptDefault));
IL2CPP_REGISTER_METHODINFO(0x0475B2F8, DialogHandler_HandleDialog__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DD4F30, void, Show, (DialogHandler * __this));
IL2CPP_REGISTER_METHOD(0x01DD4FA0, void, Hide, (DialogHandler * __this));
IL2CPP_REGISTER_METHOD(0x01DD50C0, void, HandleContextMenu, (DialogHandler * __this, String * menuJSON, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DialogHandler * __this));
}
