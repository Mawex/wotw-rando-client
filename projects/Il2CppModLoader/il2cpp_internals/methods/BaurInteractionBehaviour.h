using namespace app;

namespace app::methods::BaurInteractionBehaviour {
IL2CPP_REGISTER_METHOD(0x00F9A690, void, OnEntityInitialized, (BaurInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F9A7B0, void, OnEnter, (BaurInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F9AB50, BehaviourStatus__Enum, OnExecute, (BaurInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F9AB90, void, OnExit, (BaurInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F9AE90, void, ChangeState, (BaurInteractionBehaviour * __this, BaurInteractionBehaviour_InteractionStates__Enum state));
IL2CPP_REGISTER_METHODINFO(0x0475EA18, BaurInteractionBehaviour_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F9AFA0, void, Introduction, (BaurInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F9AFA0, void, AfterIntroductionRepeat, (BaurInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F9AFC0, void, Idle, (BaurInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F9AFE0, void, PlayTimeline, (BaurInteractionBehaviour * __this, MoonTimeline * timeline, Action * onFinished));
IL2CPP_REGISTER_METHOD(0x00F9B110, void, OnIntroductionDialogStarts, (BaurInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04748768, BaurInteractionBehaviour_OnIntroductionDialogStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F9B1D0, void, OnAfterIntroRepeatDialogStarts, (BaurInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0474BC28, BaurInteractionBehaviour_OnAfterIntroRepeatDialogStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (BaurInteractionBehaviour * __this));
}
