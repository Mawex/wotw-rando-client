#include <interception_macros.h>

namespace app::methods::Stomper {
IL2CPP_REGISTER_METHOD(0x00656A30, void, Awake, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x00656AD0, void, OnDestroy, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x00656B70, void, CalculateDistance, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x00657260, void, Start, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x00657AB0, void, FixedUpdate, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x00658170, void, UpdatePosition, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x006584A0, void, ChangeState, (Stomper * __this, Stomper_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00658660, void, PlayerTouchedTrigger, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x006587A0, void, MoveBody, (Stomper * __this, Rigidbody * rigidbody, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00658AB0, bool, get_IsSuspended, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x00658AC0, void, set_IsSuspended, (Stomper * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFA60, SuspendableMask__Enum, get_Mask, (Stomper * __this));
IL2CPP_REGISTER_METHOD(0x00658AD0, void, set_Mask, (Stomper * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00658B90, void, __ctor, (Stomper * __this));
}
