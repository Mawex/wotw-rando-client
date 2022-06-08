#include <interception_macros.h>

namespace app::methods::MortarEntity_AimVeloCache {
IL2CPP_REGISTER_METHOD(0x01478230, void, __ctor, (MortarEntity_AimVeloCache * __this, MortarEntity * entity));
IL2CPP_REGISTER_METHOD(0x014783A0, void, PrepareForGame, (MortarEntity_AimVeloCache * __this));
IL2CPP_REGISTER_METHOD(0x014783F0, bool, GetTargetVelocity, (MortarEntity_AimVeloCache * __this, Vector3 targetPos, Vector3 * velocity));
IL2CPP_REGISTER_METHOD(0x01478460, void, DebugDraw, (MortarEntity_AimVeloCache * __this));
IL2CPP_REGISTER_METHOD(0x01478480, void, Generate, (MortarEntity_AimVeloCache * __this));
IL2CPP_REGISTER_METHOD(0x014788F0, float, PointLineDist, (Vector3 point, Vector3 lineFrom, Vector3 lineTo));
}
