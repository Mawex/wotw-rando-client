#include <interception_macros.h>

namespace app::methods::Moon::EntityState {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsRunning, (EntityState * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsRunning, (EntityState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (EntityState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (EntityState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (EntityState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (EntityState * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (EntityState * __this));
}
