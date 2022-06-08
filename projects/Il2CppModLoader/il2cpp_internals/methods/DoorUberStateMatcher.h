#include <interception_macros.h>

namespace app::methods::DoorUberStateMatcher {
IL2CPP_REGISTER_METHOD(0x01B5A360, void, __ctor, (DoorUberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x01B5A5D0, DesiredUberStateDoor_DoorState__Enum, BoolToDoorState, (bool input));
IL2CPP_REGISTER_METHOD(0x01B5A5E0, bool, DoorStateToBool, (DesiredUberStateDoor_DoorState__Enum input));
}
