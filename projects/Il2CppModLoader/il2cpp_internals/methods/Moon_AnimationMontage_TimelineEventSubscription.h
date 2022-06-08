#include <interception_macros.h>

namespace app::methods::Moon::AnimationMontage_TimelineEventSubscription {
IL2CPP_REGISTER_METHOD(0x0133C0B0, void, __ctor, (AnimationMontage_TimelineEventSubscription * __this, String * eventId, AnimationMontage * montage, IMontageEventProvider * provider));
IL2CPP_REGISTER_METHOD(0x0133C0C0, void, Subscribe, (AnimationMontage_TimelineEventSubscription * __this));
IL2CPP_REGISTER_METHOD(0x0133C520, void, Unsubscribe, (AnimationMontage_TimelineEventSubscription * __this));
IL2CPP_REGISTER_METHOD(0x0133C980, void, OnStart, (AnimationMontage_TimelineEventSubscription * __this));
IL2CPP_REGISTER_METHODINFO(0x04712C50, AnimationMontage_TimelineEventSubscription_OnStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0133C9B0, void, OnStay, (AnimationMontage_TimelineEventSubscription * __this));
IL2CPP_REGISTER_METHODINFO(0x047936D8, AnimationMontage_TimelineEventSubscription_OnStay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0133C9E0, void, OnEnd, (AnimationMontage_TimelineEventSubscription * __this));
IL2CPP_REGISTER_METHODINFO(0x0478E6D8, AnimationMontage_TimelineEventSubscription_OnEnd__MethodInfo);
}
