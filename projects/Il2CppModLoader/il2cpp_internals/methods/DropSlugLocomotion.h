#include <interception_macros.h>

namespace app::methods::DropSlugLocomotion {
IL2CPP_REGISTER_METHOD(0x00BE57B0, bool, get_IsSpinning, (DropSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00BE57D0, float, get_ContinuousRotation, (DropSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00BE57E0, void, RegisterContinuousRotation, (DropSlugLocomotion * __this, float rotation));
IL2CPP_REGISTER_METHOD(0x00BE5A20, void, OnFixedUpdate, (DropSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00BE5EE0, void, ResetRotation, (DropSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x00BE5FE0, void, __ctor, (DropSlugLocomotion * __this));
}
