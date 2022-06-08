#include <interception_macros.h>

namespace app::methods::Moon::Timeline::SpriteAnimationPlayer {
IL2CPP_REGISTER_METHOD(0x002FBCE0, TextureAnimator *, get_TextureAnimator, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D05BE0, void, add_OnAnimationEndEvent, (SpriteAnimationPlayer * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00D05CD0, void, remove_OnAnimationEndEvent, (SpriteAnimationPlayer * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00D05DC0, void, InitBinder, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D05F40, void, Awake, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D060E0, void, InitializeMesh, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D062D0, void, OnDestroy, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_HasAnimationEndedTriggered, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00603D70, void, set_HasAnimationEndedTriggered, (SpriteAnimationPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00D063D0, void, CacheOriginals, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D064B0, void, SampleValue, (SpriteAnimationPlayer * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00D06690, void, RestoreToOriginalState, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D066A0, void, OnStartPlayback, (SpriteAnimationPlayer * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D066E0, void, OnStopPlayback, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D06710, void, OnUpdateEntity, (SpriteAnimationPlayer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D06AE0, void, EnableRenderer, (SpriteAnimationPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00D06B10, bool, get_AnimationEnded, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D06B40, void, ChangeMainTextureToAnimatorTexture, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D06D40, Atlas *, get_SettingsAtlas, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D06F00, UberScreenMode__Enum, GetExternalUberScreenMode, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D07010, float, GetUberTweakValue, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D07120, bool, DoesProvideAtlas, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D07220, void, SetAnimation, (SpriteAnimationPlayer * __this, TextureAnimation * textureAnimation, bool resetTime));
IL2CPP_REGISTER_METHOD(0x00D073D0, void, AnimationStart, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHODINFO(0x04736AD0, SpriteAnimationPlayer_AnimationStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D07570, TextureAnimation *, get_CurrentAnimation, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D07590, void, SetDirty, (SpriteAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D075A0, void, __ctor, (SpriteAnimationPlayer * __this));
}
