using namespace app;

namespace app::methods::SpriteAnimator {
IL2CPP_REGISTER_METHOD(0x002FBD60, TextureAnimator *, get_TextureAnimator, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AA060, void, add_OnAnimationEndEvent, (SpriteAnimator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x009AA150, void, remove_OnAnimationEndEvent, (SpriteAnimator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x009AA240, void, InitBinder, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AA3D0, void, OnEnable, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AA3F0, void, OnPoolSpawned, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AA460, void, Awake, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AA600, void, Start, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AA710, void, InitializeMesh, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AA900, void, OnDestroy, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AAA00, void, DoSerialize, (SpriteAnimator * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_HasAnimationEndedTriggered, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007DE880, void, set_HasAnimationEndedTriggered, (SpriteAnimator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009AABD0, void, CacheOriginals, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AACB0, void, SampleValue, (SpriteAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x009AAD40, void, RestoreToOriginalState, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AAD60, void, OnFixedUpdate, (SpriteAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x009AB080, bool, get_AnimationEnded, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AB0B0, void, ChangeMainTextureToAnimatorTexture, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AB2B0, Atlas *, get_SettingsAtlas, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AB470, UberScreenMode__Enum, GetExternalUberScreenMode, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AB580, float, GetUberTweakValue, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AB690, bool, DoesProvideAtlas, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009AB790, void, SetAnimation, (SpriteAnimator * __this, TextureAnimation * textureAnimation, bool resetTime));
IL2CPP_REGISTER_METHOD(0x009AB960, float, get_Duration, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009ABA70, void, AnimationStart, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E7B0, SpriteAnimator_AnimationStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009ABC10, bool, get_IsLooping, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009ABD10, TextureAnimation *, get_CurrentAnimation, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009ABD30, void, SetDirty, (SpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x009ABD40, void, __ctor, (SpriteAnimator * __this));
}
