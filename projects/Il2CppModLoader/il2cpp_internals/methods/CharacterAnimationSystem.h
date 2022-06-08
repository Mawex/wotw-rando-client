using namespace app;

namespace app::methods::CharacterAnimationSystem {
IL2CPP_REGISTER_METHOD(0x010475F0, void, RemoveState, (CharacterAnimationSystem * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x010476E0, int32_t, RemoveLowerLayersAndFindIndex, (CharacterAnimationSystem * __this, int32_t layer));
IL2CPP_REGISTER_METHOD(0x010477E0, CharacterAnimationSystem_CharacterAnimationState *, Play, (CharacterAnimationSystem * __this, TextureAnimationWithTransitions * animationToPlay, int32_t layer, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x010479A0, CharacterAnimationSystem_CharacterAnimationState *, Play, (CharacterAnimationSystem * __this, String * animationToPlay, int32_t layer, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x01047B40, ActiveAnimationHandle, Play, (CharacterAnimationSystem * __this, MoonAnimation * animationToPlay, int32_t layer, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x01047C90, CharacterAnimationSystem_CharacterAnimationState *, RestartLoop, (CharacterAnimationSystem * __this, TextureAnimationWithTransitions * animationToPlay, int32_t layer, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x01047E50, CharacterAnimationSystem_CharacterAnimationState *, RestartLoop, (CharacterAnimationSystem * __this, String * animationToPlay, int32_t layer, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x01047FF0, CharacterAnimationSystem_CharacterAnimationState *, PlayLoop, (CharacterAnimationSystem * __this, TextureAnimationWithTransitions * animationToPlay, int32_t layer, Func_1_Boolean_ * condition, bool keepFrame));
IL2CPP_REGISTER_METHOD(0x01048290, CharacterAnimationSystem_CharacterAnimationState *, PlayLoop, (CharacterAnimationSystem * __this, String * animationToPlay, int32_t layer, Func_1_Boolean_ * condition, bool keepFrame));
IL2CPP_REGISTER_METHOD(0x01048510, CharacterAnimationSystem_CharacterAnimationState *, PlayRandom, (CharacterAnimationSystem * __this, TextureAnimationWithTransitions__Array * animationsToPlay, int32_t layer, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x01048600, CharacterAnimationSystem_CharacterAnimationState *, PlayLoopRandom, (CharacterAnimationSystem * __this, TextureAnimationWithTransitions__Array * animationsToPlay, int32_t layer, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x010486F0, void, Start, (CharacterAnimationSystem * __this));
IL2CPP_REGISTER_METHOD(0x01048700, void, UpdateStates, (CharacterAnimationSystem * __this));
IL2CPP_REGISTER_METHOD(0x01048D40, void, FixedUpdate, (CharacterAnimationSystem * __this));
IL2CPP_REGISTER_METHOD(0x01048F50, void, Awake, (CharacterAnimationSystem * __this));
IL2CPP_REGISTER_METHOD(0x01049220, void, OnDestroy, (CharacterAnimationSystem * __this));
IL2CPP_REGISTER_METHOD(0x010494F0, void, OnAnimationEnd, (CharacterAnimationSystem * __this, TextureAnimation * animation));
IL2CPP_REGISTER_METHODINFO(0x04769890, CharacterAnimationSystem_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01049660, void, OnAnimationEnd, (CharacterAnimationSystem * __this, String * animationName));
IL2CPP_REGISTER_METHOD(0x01049770, void, EnableRootMotion, (CharacterAnimationSystem * __this, bool disableStickToPlatforms));
IL2CPP_REGISTER_METHOD(0x010498B0, void, DisableRootMotion, (CharacterAnimationSystem * __this));
IL2CPP_REGISTER_METHOD(0x010499F0, void, OnProcessRootMotion, (CharacterAnimationSystem * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHODINFO(0x0474B9E0, CharacterAnimationSystem_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01049CE0, void, __ctor, (CharacterAnimationSystem * __this));
}
