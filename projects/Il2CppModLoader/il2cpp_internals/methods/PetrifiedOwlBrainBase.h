using namespace app;

namespace app::methods::PetrifiedOwlBrainBase {
IL2CPP_REGISTER_METHOD(0x017824F0, float, get_Duration, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x01782500, void, Awake, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x017826E0, void, OnDestroy, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x017828A0, void, OnPreRestore, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x017828E0, void, OnStartPlay, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x00DCA8C0, void, OnStopPlay, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x017828F0, void, SampleValue, (PetrifiedOwlBrainBase * __this, float time, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x01782920, void, OnFixedUpdate, (PetrifiedOwlBrainBase * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01782950, void, StopBrain, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x01782960, void, AddAnimationMask, (PetrifiedOwlBrainBase * __this, GameObject * maskPrefab, float speed));
IL2CPP_REGISTER_METHOD(0x01782AB0, void, ClearAnimationMasks, (PetrifiedOwlBrainBase * __this));
IL2CPP_REGISTER_METHOD(0x01782C40, void, __ctor, (PetrifiedOwlBrainBase * __this));
}
