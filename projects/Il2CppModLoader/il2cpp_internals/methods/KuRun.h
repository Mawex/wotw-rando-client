using namespace app;

namespace app::methods::KuRun {
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_RunSquashFloat, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_RunSquashFloat, (KuRun * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FD740, float, get_RunSquashAmout, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x005E3B30, void, set_RunSquashAmout, (KuRun * __this, float value));
IL2CPP_REGISTER_METHOD(0x01245C30, void, OnSetReferenceToKu, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01236310, void, OnExit, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01245C60, void, UpdateState, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x012460D0, bool, ShouldPlayRun, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01246350, void, HandleFootstepEvents, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01246630, bool, ShouldAndIsRunning, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01246660, bool, get_HasStartedTurning, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x012466A0, bool, get_HasFinishedTurning, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x012466C0, void, Turn, (KuRun * __this, bool faceLeft));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_WantsToFaceLeft, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x009AD920, void, set_WantsToFaceLeft, (KuRun * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012365B0, bool, get_ShouldInterruptTurning, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01246700, bool, get_IsCancellable, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01246730, void, InterruptTurning, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01246760, void, __ctor, (KuRun * __this));
IL2CPP_REGISTER_METHOD(0x01246780, bool, _UpdateState_b__21_0, (KuRun * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A3F8, KuRun__UpdateState_b__21_0__MethodInfo);
}
