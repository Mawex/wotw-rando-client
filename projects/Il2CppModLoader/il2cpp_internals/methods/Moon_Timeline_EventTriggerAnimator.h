using namespace app;

namespace app::methods::Moon::Timeline::EventTriggerAnimator {
IL2CPP_REGISTER_METHOD(0x002FBBC0, Action_1_Moon_Timeline_EventTriggerAnimator_ *, get_EventStartWithTriggerInfo, (EventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_EventStartWithTriggerInfo, (EventTriggerAnimator * __this, Action_1_Moon_Timeline_EventTriggerAnimator_ * value));
IL2CPP_REGISTER_METHOD(0x01BBD1A0, bool, get_IsOn, (EventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00738690, float, get_Duration, (EventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_Duration, (EventTriggerAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Action *, get_EventStart, (EventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_EventStart, (EventTriggerAnimator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBC00, Action *, get_EventStay, (EventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_EventStay, (EventTriggerAnimator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, Action *, get_EventEnd, (EventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_EventEnd, (EventTriggerAnimator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x01BBD1B0, void, OnStartPlayback, (EventTriggerAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0076FF70, void, OnStopPlayback, (EventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BBD270, void, OnUpdateEntity, (EventTriggerAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BBD1A0, bool, Validate, (EventTriggerAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BBD2B0, void, __ctor, (EventTriggerAnimator * __this));
}
