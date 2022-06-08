#include <interception_macros.h>

namespace app::methods::Steamworks::gameserveritem_t {
IL2CPP_REGISTER_METHOD(0x027AACA0, String *, GetGameDir, (gameserveritem_t * __this));
IL2CPP_REGISTER_METHOD(0x027AAE20, void, SetGameDir, (gameserveritem_t * __this, String * dir));
IL2CPP_REGISTER_METHOD(0x027AAEF0, String *, GetMap, (gameserveritem_t * __this));
IL2CPP_REGISTER_METHOD(0x027AB070, void, SetMap, (gameserveritem_t * __this, String * map));
IL2CPP_REGISTER_METHOD(0x027AB140, String *, GetGameDescription, (gameserveritem_t * __this));
IL2CPP_REGISTER_METHOD(0x027AB2C0, void, SetGameDescription, (gameserveritem_t * __this, String * desc));
IL2CPP_REGISTER_METHOD(0x027AB390, String *, GetServerName, (gameserveritem_t * __this));
IL2CPP_REGISTER_METHOD(0x027AB560, void, SetServerName, (gameserveritem_t * __this, String * name));
IL2CPP_REGISTER_METHOD(0x027AB630, String *, GetGameTags, (gameserveritem_t * __this));
IL2CPP_REGISTER_METHOD(0x027AB7B0, void, SetGameTags, (gameserveritem_t * __this, String * tags));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (gameserveritem_t * __this));
}
