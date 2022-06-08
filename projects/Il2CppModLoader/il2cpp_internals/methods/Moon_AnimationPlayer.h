using namespace app;

namespace app::methods::Moon::AnimationPlayer {
IL2CPP_REGISTER_METHOD(0x01BA4D70, GameObject *, get_ExternalTarget, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA4E20, MoonAnimation *, get_EffectiveAnimation, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA4F30, ActiveAnimationHandle *, get_ActiveAnimation, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA4F40, bool, get_IsAnimatorActive, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA5030, float, get_ResolvedAdditiveWeight, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_ApplyRootMotionForPreview, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x009CA210, void, set_ApplyRootMotionForPreview, (AnimationPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BA5090, void, OnDestroy, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA50B0, void, Finalize, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA5150, void, MoonCleanup, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA5350, void, OnStartPlayback, (AnimationPlayer * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BA57E0, void, OnUpdateEntity, (AnimationPlayer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BA5800, void, OnStopPlayback, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA5850, void, SetTimeScale, (AnimationPlayer * __this, float timescale));
IL2CPP_REGISTER_METHOD(0x01BA5880, void, Play, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA5B20, void, OnActiveAnimationStopEvent, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA5CE0, void, SubscribeToMoonAnimatorEnableCallback, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA5F40, void, UnsubscribeToMoonAnimatorEnableCallback, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BA61A0, void, LateAnimationStart, (AnimationPlayer * __this));
IL2CPP_REGISTER_METHODINFO(0x04722CE8, AnimationPlayer_LateAnimationStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA61F0, void, __ctor, (AnimationPlayer * __this));
}
