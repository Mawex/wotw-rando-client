using namespace app;

namespace app::methods::PetrifiedOwlPhaseABrain {
IL2CPP_REGISTER_METHOD(0x014E3D60, void, Awake, (PetrifiedOwlPhaseABrain * __this));
IL2CPP_REGISTER_METHOD(0x014E42A0, void, OnPreRestore, (PetrifiedOwlPhaseABrain * __this));
IL2CPP_REGISTER_METHOD(0x014E42F0, void, OnStartPlay, (PetrifiedOwlPhaseABrain * __this));
IL2CPP_REGISTER_METHOD(0x014E4660, void, OnStopPlay, (PetrifiedOwlPhaseABrain * __this));
IL2CPP_REGISTER_METHOD(0x014E46D0, void, OnReceiveDamageLeftLeg, (PetrifiedOwlPhaseABrain * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0477F768, PetrifiedOwlPhaseABrain_OnReceiveDamageLeftLeg__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E4A60, void, OnReceiveDamageRightLeg, (PetrifiedOwlPhaseABrain * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0477AAE0, PetrifiedOwlPhaseABrain_OnReceiveDamageRightLeg__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E4DF0, void, OnBrainBehaviourStarted, (PetrifiedOwlPhaseABrain * __this, BrainBehaviour * behaviour));
IL2CPP_REGISTER_METHODINFO(0x04773C30, PetrifiedOwlPhaseABrain_OnBrainBehaviourStarted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E4F40, void, OnBrainBehaviourEnded, (PetrifiedOwlPhaseABrain * __this, BrainBehaviour * behaviour));
IL2CPP_REGISTER_METHODINFO(0x047046B8, PetrifiedOwlPhaseABrain_OnBrainBehaviourEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E50D0, void, OnFixedUpdate, (PetrifiedOwlPhaseABrain * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x014E5310, void, __ctor, (PetrifiedOwlPhaseABrain * __this));
}
