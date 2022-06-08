using namespace app;

namespace app::methods::KuJump {
IL2CPP_REGISTER_METHOD(0x0123A3E0, bool, get_PerformingSpringJump, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123A400, bool, get_WantsToJump, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123A4C0, bool, get_CanJump, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123A5C0, void, Start, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123A7A0, void, OnDestroy, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123A980, void, OnSetReferenceToKu, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123A9B0, void, UpdateState, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123AC00, void, CrouchGoThrough, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123B2D0, void, Jump, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x012365B0, bool, ShouldJumpAnimationKeepPlaying, (KuJump * __this));
IL2CPP_REGISTER_METHODINFO(0x0478CD18, KuJump_ShouldJumpAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0123BB30, void, PerformSpringJump, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnJumpAnimationEnded, (KuJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04765038, KuJump_OnJumpAnimationEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01236310, void, StopJumpAnimation, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123BEB0, void, OnPreDoubleJumpPerform, (KuJump * __this));
IL2CPP_REGISTER_METHODINFO(0x04770E10, KuJump_OnPreDoubleJumpPerform__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0123BED0, bool, get_HasStartedTurning, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123BF00, bool, get_HasFinishedTurning, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_WantsToFaceLeft, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x006B8970, void, set_WantsToFaceLeft, (KuJump * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01235C70, bool, get_ShouldInterruptTurning, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123BF20, bool, get_IsCancellable, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123BEB0, void, InterruptTurning, (KuJump * __this));
IL2CPP_REGISTER_METHOD(0x0123BF40, void, Turn, (KuJump * __this, bool faceLeft));
IL2CPP_REGISTER_METHOD(0x0123C080, void, __ctor, (KuJump * __this));
}
