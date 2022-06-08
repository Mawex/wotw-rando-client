#include <interception_macros.h>

namespace app::methods::Moon::Timeline::MoveEventWindowAnimator {
IL2CPP_REGISTER_METHOD(0x002FBBE0, Action_1_Moon_Timeline_MoveEventType_ *, get_EventStart, (MoveEventWindowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_EventStart, (MoveEventWindowAnimator * __this, Action_1_Moon_Timeline_MoveEventType_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC00, Action_1_Moon_Timeline_MoveEventType_ *, get_EventStay, (MoveEventWindowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_EventStay, (MoveEventWindowAnimator * __this, Action_1_Moon_Timeline_MoveEventType_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, Action_1_Moon_Timeline_MoveEventType_ *, get_EventEnd, (MoveEventWindowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_EventEnd, (MoveEventWindowAnimator * __this, Action_1_Moon_Timeline_MoveEventType_ * value));
IL2CPP_REGISTER_METHOD(0x00777080, void, OnStartPlayback, (MoveEventWindowAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00777120, void, OnStopPlayback, (MoveEventWindowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007771C0, void, OnUpdateEntity, (MoveEventWindowAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00777280, void, __ctor, (MoveEventWindowAnimator * __this));
}
