#include <interception_macros.h>

namespace app::methods::SinMovement {
IL2CPP_REGISTER_METHOD(0x00749550, bool, get_IsSuspended, (SinMovement * __this));
IL2CPP_REGISTER_METHOD(0x00749560, void, set_IsSuspended, (SinMovement * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0065B580, SuspendableMask__Enum, get_Mask, (SinMovement * __this));
IL2CPP_REGISTER_METHOD(0x00749570, void, set_Mask, (SinMovement * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00749630, void, OnValidate, (SinMovement * __this));
IL2CPP_REGISTER_METHOD(0x00749820, void, Awake, (SinMovement * __this));
IL2CPP_REGISTER_METHOD(0x007498C0, void, OnDestroy, (SinMovement * __this));
IL2CPP_REGISTER_METHOD(0x00749960, void, Serialize, (SinMovement * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x007499B0, void, Start, (SinMovement * __this));
IL2CPP_REGISTER_METHOD(0x00749BA0, void, FixedUpdate, (SinMovement * __this));
IL2CPP_REGISTER_METHOD(0x00749C20, void, UpdateMovement, (SinMovement * __this, float time));
IL2CPP_REGISTER_METHOD(0x0074A410, void, __ctor, (SinMovement * __this));
}
