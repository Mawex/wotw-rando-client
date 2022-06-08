#include <interception_macros.h>

namespace app::methods::PlaymodeUpdateDelegate {
IL2CPP_REGISTER_METHOD(0x02EA08A0, void, add_OnPlaymodeUpdate, (Action * value));
IL2CPP_REGISTER_METHOD(0x02EA09E0, void, remove_OnPlaymodeUpdate, (Action * value));
IL2CPP_REGISTER_METHOD(0x02EA0B20, PlaymodeUpdateDelegate *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (PlaymodeUpdateDelegate * __this));
IL2CPP_REGISTER_METHOD(0x02EA0DE0, void, Update, (PlaymodeUpdateDelegate * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PlaymodeUpdateDelegate * __this));
IL2CPP_REGISTER_METHOD(0x02EA0EC0, void, __cctor, ());
}
