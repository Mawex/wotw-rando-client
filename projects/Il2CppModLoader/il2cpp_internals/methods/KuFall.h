using namespace app;

namespace app::methods::KuFall {
IL2CPP_REGISTER_METHOD(0x01235EE0, void, OnSetReferenceToKu, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01235F10, bool, get_IsStatePerforming, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01235FE0, void, UpdateState, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01236310, void, OnExit, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01236310, void, StopFallAnimation, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01236340, bool, get_HasStartedTurning, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01236370, bool, get_HasFinishedTurning, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_WantsToFaceLeft, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_WantsToFaceLeft, (KuFall * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01236390, bool, get_ShouldInterruptTurning, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01236430, bool, get_IsCancellable, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01236450, void, InterruptTurning, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x01236470, void, Turn, (KuFall * __this, bool faceLeft));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (KuFall * __this));
IL2CPP_REGISTER_METHOD(0x012365B0, bool, _UpdateState_b__8_0, (KuFall * __this));
IL2CPP_REGISTER_METHODINFO(0x04747B20, KuFall__UpdateState_b__8_0__MethodInfo);
}
