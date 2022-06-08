#include <interception_macros.h>

namespace app::methods::MudkisserFallReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00873B70, void, AllowCancel, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D6C8, MudkisserFallReactionBehaviour_AllowCancel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00873B80, void, DisallowCancel, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04704930, MudkisserFallReactionBehaviour_DisallowCancel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00873B90, void, StartTimeline, (MudkisserFallReactionBehaviour * __this, MoonTimeline * timeline, Action * OnStop));
IL2CPP_REGISTER_METHOD(0x00874120, void, ResetTimeline, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00874610, void, EndBehaviour, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04773050, MudkisserFallReactionBehaviour_EndBehaviour__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00874940, void, OnInitializeTask, (MudkisserFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00874B00, void, OnEnterTask, (MudkisserFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00874E70, void, GotHit, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00874EF0, BehaviourStatus__Enum, OnExecuteTask, (MudkisserFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00875720, bool, ShouldPauseLocomotion, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00875730, void, OnExitTask, (MudkisserFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00875740, void, __ctor, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00875770, void, _OnEnterTask_b__24_0, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04769A08, MudkisserFallReactionBehaviour__OnEnterTask_b__24_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00875770, void, _OnEnterTask_b__24_1, (MudkisserFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B9A0, MudkisserFallReactionBehaviour__OnEnterTask_b__24_1__MethodInfo);
}
