#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TransformAnimatorSystem_ObjectState {
IL2CPP_REGISTER_METHOD(0x0311F8F0, Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_ *, get_HandoverPosition, (TransformAnimatorSystem_ObjectState * __this));
IL2CPP_REGISTER_METHOD(0x0311F900, void, SetHandoverPosition, (TransformAnimatorSystem_ObjectState * __this, Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_ * value));
IL2CPP_REGISTER_METHOD(0x0311F9A0, Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_ *, get_HandoverRotation, (TransformAnimatorSystem_ObjectState * __this));
IL2CPP_REGISTER_METHOD(0x0311F9B0, void, SetHandoverRotation, (TransformAnimatorSystem_ObjectState * __this, Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_ * value));
IL2CPP_REGISTER_METHOD(0x0311FA50, Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ *, get_HandoverScale, (TransformAnimatorSystem_ObjectState * __this));
IL2CPP_REGISTER_METHOD(0x0311FA60, void, SetHandoverScale, (TransformAnimatorSystem_ObjectState * __this, Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ * value));
IL2CPP_REGISTER_METHOD(0x0311FB00, bool, ContainsHandoverValue, (TransformAnimatorSystem_ObjectState * __this));
IL2CPP_REGISTER_METHOD(0x0311FBA0, void, InvalidateHandoversForNextFrame, (TransformAnimatorSystem_ObjectState * __this));
IL2CPP_REGISTER_METHOD(0x0311FBC0, void, KillInvalidHandovers, (TransformAnimatorSystem_ObjectState * __this));
IL2CPP_REGISTER_METHOD(0x0311FC40, void, Reset, (TransformAnimatorSystem_ObjectState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TransformAnimatorSystem_ObjectState * __this));
}
