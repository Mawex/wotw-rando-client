using namespace app;

namespace app::methods::SpiderNpcEntity {
IL2CPP_REGISTER_METHOD(0x011BE8A0, String *, get_DialogActorName, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BE920, String *, get_InteractionActorName, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CameraTargetActive, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BE9A0, SpiderNpcEntity_State__Enum, get_CurrentState, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BE9D0, void, set_CurrentState, (SpiderNpcEntity * __this, SpiderNpcEntity_State__Enum value));
IL2CPP_REGISTER_METHOD(0x011BEA00, void, OnEnable, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BEAC0, void, OnDisable, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BEB70, void, PlayLookAnimation, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BED60, void, PlayTalkAnimation, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BEF50, void, OnUpdate, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BF340, void, StartIdle, (SpiderNpcEntity * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BF5F0, void, Apply, (SpiderNpcEntity * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00C0D850, IUberState__Array *, get_AffectingUberStates, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BF640, void, set_AffectingUberStates, (SpiderNpcEntity * __this, IUberState__Array * value));
IL2CPP_REGISTER_METHOD(0x011BF650, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BF660, void, set_AllTargets, (SpiderNpcEntity * __this, List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x011BF670, bool, _PlayLookAnimation_b__24_0, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0472CA50, SpiderNpcEntity__PlayLookAnimation_b__24_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011BF680, bool, _PlayTalkAnimation_b__25_0, (SpiderNpcEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04723D20, SpiderNpcEntity__PlayTalkAnimation_b__25_0__MethodInfo);
}
