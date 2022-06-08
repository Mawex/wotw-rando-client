#include <interception_macros.h>

namespace app::methods::Enemy2D {
IL2CPP_REGISTER_METHOD(0x00B39300, CharacterSpriteMirror *, get_SpriteMirror, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFE4E0, SpriteAnimatorWithTransitions *, get_SpriteAnimator, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFE500, MoonAnimator *, get_Animator, (Enemy2D * __this));
IL2CPP_REGISTER_METHODINFO(0x0478D520, Enemy2D_get_Animator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BFE550, SoundHost *, get_SoundHost, (Enemy2D * __this));
IL2CPP_REGISTER_METHODINFO(0x04735D70, Enemy2D_get_SoundHost__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BFE5D0, bool, get_FaceLeft, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFE610, void, set_FaceLeft, (Enemy2D * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00BFE660, int32_t, get_FaceLeftSign, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFE6A0, void, Serialize, (Enemy2D * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00BFE9A0, bool, get_IsFacingPlayer, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFEA10, void, FacePlayer, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFEA90, void, FaceStartPosition, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFEB10, void, FaceAwayFromPlayer, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFEB90, void, PlayAnimationOnce, (Enemy2D * __this, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x00BFECB0, void, RestartAnimationLoop, (Enemy2D * __this, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x00BFEDD0, void, PlayAnimationLoop, (Enemy2D * __this, TextureAnimationWithTransitions * anim, int32_t layer));
IL2CPP_REGISTER_METHOD(0x002FBC60, CharacterAnimationSystem *, IPuppetBase_get_Animation, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x004C2B80, void, Awake, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00BFEF00, void, CreatePuppet, (Enemy2D * __this));
IL2CPP_REGISTER_METHOD(0x00443680, void, __ctor, (Enemy2D * __this));
}
