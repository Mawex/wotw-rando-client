#include <interception_macros.h>

namespace app::methods::SoundManager {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_WWiseEnabled, (SoundManager * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_WWiseEnabled, (SoundManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (SoundManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (SoundManager * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SoundManager * __this));
}
