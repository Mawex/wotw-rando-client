#include <interception_macros.h>

namespace app::methods::SeinPlatformMovement {
IL2CPP_REGISTER_METHOD(0x005C7080, bool, get_IsSphere, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C70B0, Vector3, get_FeetRayPosition, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C7280, Vector3, get_HeadRayPosition, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C7450, bool, get_IsAllowedNonZeroZPosition, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C7610, void, SetReferenceToSein, (app::SeinPlatformMovement * this_ptr, app::SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x005C7620, Vector3, get_Position, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C76C0, void, set_Position, (app::SeinPlatformMovement * this_ptr, app::Vector3 value));
IL2CPP_REGISTER_METHOD(0x005C7870, void, OnAwake, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C7920, void, OnDestroy, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C79D0, void, Apply, (app::SeinPlatformMovement * this_ptr, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x005C7C10, bool, get_ApplyOnEditor, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C7C20, IUberState__Array *, get_AffectingUberStates, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C7C30, List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C7C40, void, OnBeforeSave, (app::SeinPlatformMovement * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C7DF0, void, __ctor, (app::SeinPlatformMovement * this_ptr));
}
