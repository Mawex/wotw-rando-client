#include <interception_macros.h>

namespace app::methods::HitReactionSettings {
IL2CPP_REGISTER_METHOD(0x00B58030, HitReactionSettings *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00B581D0, float, GetAdditiveAnimWeight, (HitReactionSettings * __this, float damageAmount));
IL2CPP_REGISTER_METHOD(0x00B582D0, void, ResetToInitialValues, (HitReactionSettings * __this));
IL2CPP_REGISTER_METHOD(0x00B58330, void, __ctor, (HitReactionSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
