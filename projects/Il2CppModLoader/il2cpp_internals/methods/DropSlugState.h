#include <interception_macros.h>

namespace app::methods::DropSlugState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (DropSlugState * __this, DropSlugEnemy * slug));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (DropSlugState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (DropSlugState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (DropSlugState * __this));
IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (DropSlugState * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (DropSlugState * __this));
}
