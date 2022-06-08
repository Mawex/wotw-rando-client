using namespace app;

namespace app::methods::GlideFeatherAnimator {
IL2CPP_REGISTER_METHOD(0x007F4060, Atlas__Array *, get_Atlases, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F4080, void, InitAtlases, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F4290, void, Awake, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F4480, void, OnDestroy, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F4560, void, Start, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F4990, AtlasSpriteTexture *, get_SeinCurrentTexture, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F4A50, bool, MatchFrame, (GlideFeatherAnimator * __this, String * name, GlideFeatherAnimator_AtlasAndSpriteTexture * texture));
IL2CPP_REGISTER_METHOD(0x007F4B80, void, FixedUpdate, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F4FC0, UberScreenMode__Enum, GetExternalUberScreenMode, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F5010, float, GetUberTweakValue, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F5060, bool, DoesProvideAtlas, (GlideFeatherAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F51A0, void, __ctor, (GlideFeatherAnimator * __this));
}
