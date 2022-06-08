using namespace app;

namespace app::methods::StatisticianInteractionBehaviour {
IL2CPP_REGISTER_METHOD(0x009B8C30, void, OnEntityInitialized, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009B8DF0, void, OnEnter, (StatisticianInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B92D0, BehaviourStatus__Enum, OnExecute, (StatisticianInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B9390, void, OnExit, (StatisticianInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B97D0, void, ChangeState, (StatisticianInteractionBehaviour * __this, StatisticianInteractionBehaviour_InteractionStates__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04774808, StatisticianInteractionBehaviour_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B9A80, void, Introduction, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009B9BF0, void, PlayTalkA, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047043D8, StatisticianInteractionBehaviour_PlayTalkA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B9D60, void, PlayTalkB, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009B9FD0, void, Hide, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009BA210, void, PlayTimeline, (StatisticianInteractionBehaviour * __this, MoonTimeline * timeline, Action * onFinished));
IL2CPP_REGISTER_METHOD(0x009BA340, void, OnShowStatsActivated, (StatisticianInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04703408, StatisticianInteractionBehaviour_OnShowStatsActivated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BA350, void, OnFarewellDialogStarts, (StatisticianInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0475A9E8, StatisticianInteractionBehaviour_OnFarewellDialogStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BA3E0, void, OnOfferStatsDialogStarts, (StatisticianInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04769E28, StatisticianInteractionBehaviour_OnOfferStatsDialogStarts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009BA550, void, _PlayTalkA_b__23_0, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04702030, StatisticianInteractionBehaviour__PlayTalkA_b__23_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BA570, void, _PlayTalkB_b__24_0, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04738408, StatisticianInteractionBehaviour__PlayTalkB_b__24_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BA6E0, void, _PlayTalkB_b__24_2, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04787B80, StatisticianInteractionBehaviour__PlayTalkB_b__24_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BA6E0, void, _PlayTalkB_b__24_1, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0472E370, StatisticianInteractionBehaviour__PlayTalkB_b__24_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009BA700, void, _Hide_b__25_0, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04785100, StatisticianInteractionBehaviour__Hide_b__25_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00754B80, void, _Hide_b__25_2, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04770E88, StatisticianInteractionBehaviour__Hide_b__25_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00754B80, void, _Hide_b__25_1, (StatisticianInteractionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04788658, StatisticianInteractionBehaviour__Hide_b__25_1__MethodInfo);
}
