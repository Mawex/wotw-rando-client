#include <interception_macros.h>

namespace app::methods::SeinPlatformMovement {
IL2CPP_REGISTER_METHOD(0x005C7080, bool, get_IsSphere, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C70B0, Vector3, get_FeetRayPosition, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7280, Vector3, get_HeadRayPosition, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7450, bool, get_IsAllowedNonZeroZPosition, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7610, void, SetReferenceToSein, (SeinPlatformMovement * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x005C7620, Vector3, get_Position, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C76C0, void, set_Position, (SeinPlatformMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x005C7870, void, OnAwake, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7920, void, OnDestroy, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C79D0, void, Apply, (SeinPlatformMovement * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x005C7C10, bool, get_ApplyOnEditor, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7C20, IUberState__Array *, get_AffectingUberStates, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7C30, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7C40, void, OnBeforeSave, (SeinPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C7DF0, void, __ctor, (SeinPlatformMovement * __this));
}
