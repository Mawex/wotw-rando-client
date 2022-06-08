#include <interception_macros.h>

namespace app::methods::LateStartHook {
IL2CPP_REGISTER_METHOD(0x00F21F90, void, AddLateStartMethod, (Action * method_1));
IL2CPP_REGISTER_METHOD(0x00F220E0, void, AddUberPoolItem, (UberPoolItem * item));
IL2CPP_REGISTER_METHOD(0x00F22230, bool, ContainsMethod, (Action * method_1));
IL2CPP_REGISTER_METHOD(0x00F22410, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00F224F0, void, Start, (LateStartHook * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LateStartHook * __this));
IL2CPP_REGISTER_METHOD(0x00F22730, void, __cctor, ());
}
