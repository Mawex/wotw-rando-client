#include <interception_macros.h>

namespace app::methods::SpiderBatDeathReaction {
IL2CPP_REGISTER_METHOD(0x00955A30, void, OnCacheSerializedComponents, (SpiderBatDeathReaction * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00955AF0, void, OnInitializeTask, (SpiderBatDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00955C40, void, ResetTimeline, (SpiderBatDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00955EA0, void, OnHitGround, (SpiderBatDeathReaction * __this, Vector3 pos, Collider * col));
IL2CPP_REGISTER_METHOD(0x00955EB0, void, StartDeathTimeline, (SpiderBatDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00956040, void, OnEnterTask, (SpiderBatDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00955EA0, void, OnFallingEnd, (SpiderBatDeathReaction * __this, EntityTask * task, BehaviourStatus__Enum status));
IL2CPP_REGISTER_METHODINFO(0x04761ED8, SpiderBatDeathReaction_OnFallingEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00956780, void, OnFinishedDeathStart, (SpiderBatDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00956790, void, TimelineFinished, (SpiderBatDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x04794BA0, SpiderBatDeathReaction_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009567D0, BehaviourStatus__Enum, OnExecuteTask, (SpiderBatDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00956900, void, __ctor, (SpiderBatDeathReaction * __this));
}
