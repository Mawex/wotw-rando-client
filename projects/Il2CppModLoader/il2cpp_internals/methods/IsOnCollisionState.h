#include <interception_macros.h>

namespace app::methods::IsOnCollisionState {
IL2CPP_REGISTER_METHOD(0x006472F0, bool, get_IsOnOrFutureOn, (IsOnCollisionState * __this));
IL2CPP_REGISTER_METHOD(0x00647300, bool, get_WasOnButNotIsOn, (IsOnCollisionState * __this));
IL2CPP_REGISTER_METHOD(0x00647320, bool, get_OnThisFrame, (IsOnCollisionState * __this));
IL2CPP_REGISTER_METHOD(0x00647300, bool, get_OffThisFrame, (IsOnCollisionState * __this));
IL2CPP_REGISTER_METHOD(0x00647330, void, Update, (IsOnCollisionState * __this));
IL2CPP_REGISTER_METHOD(0x00647350, void, Serialize, (IsOnCollisionState * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (IsOnCollisionState * __this));
}
