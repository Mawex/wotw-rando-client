#include <interception_macros.h>

namespace app::methods::ActivateCooldownRule {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_CurrentCooldown, (ActivateCooldownRule * __this));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_CurrentCooldown, (ActivateCooldownRule * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBB00, IComboMove *, get_CooldownSourceMove, (ActivateCooldownRule * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_CooldownSourceMove, (ActivateCooldownRule * __this, IComboMove * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ActivateCooldownRule * __this));
}
