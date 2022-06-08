#include <interception_macros.h>

namespace app::methods::DropSlugIdleState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (DropSlugIdleState * __this, DropSlugEnemy * slug));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSettings, (DropSlugIdleState * __this));
IL2CPP_REGISTER_METHOD(0x00BE5150, void, OnEnter, (DropSlugIdleState * __this));
IL2CPP_REGISTER_METHOD(0x00BE51E0, void, OnExit, (DropSlugIdleState * __this));
}
