#include <interception_macros.h>

namespace app::methods::PoisonousCloud {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (PoisonousCloud * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (PoisonousCloud * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01431EA0, void, ApplySetting, (PoisonousCloud * __this, CloudAttackSettings * settings));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (PoisonousCloud * __this));
}
