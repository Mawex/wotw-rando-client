#include <interception_macros.h>

namespace app::methods::SpiderInteractionBehaviour {
IL2CPP_REGISTER_METHOD(0x011BD6A0, Quest *, get_SpiderlingQuest, (SpiderInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011BD880, void, OnEntityInitialized, (SpiderInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011BD9A0, void, OnEnter, (SpiderInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011BDE80, BehaviourStatus__Enum, OnExecute, (SpiderInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011BDF50, void, OnExit, (SpiderInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011BE390, void, ChangeState, (SpiderInteractionBehaviour * __this, SpiderInteractionBehaviour_InteractionStates__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04725200, SpiderInteractionBehaviour_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011BE4A0, void, Introduction, (SpiderInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011BE4A0, void, GiveSpiderlingQuest, (SpiderInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011BE4A0, void, SpiderlingRetalk, (SpiderInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011BE4C0, void, Idle, (SpiderInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011BE4E0, void, PlayTimeline, (SpiderInteractionBehaviour * __this, MoonTimeline * timeline, Action * onFinished));
IL2CPP_REGISTER_METHOD(0x011BE640, void, OnIntroductionDialogStarts, (SpiderInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04730890, SpiderInteractionBehaviour_OnIntroductionDialogStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011BE6D0, void, OnIntroductionDialogFinishes, (SpiderInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04734510, SpiderInteractionBehaviour_OnIntroductionDialogFinishes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011BE810, void, OnSpiderlingRetalkStarts, (SpiderInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0478C348, SpiderInteractionBehaviour_OnSpiderlingRetalkStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SpiderInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (SpiderInteractionBehaviour * __this));
}
