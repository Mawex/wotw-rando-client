#include <interception_macros.h>

namespace app::methods::GlideFeatherAnimator {
IL2CPP_REGISTER_METHOD(0x007F4060, Atlas__Array *, get_Atlases, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F4080, void, InitAtlases, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F4290, void, Awake, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F4480, void, OnDestroy, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F4560, void, Start, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F4990, AtlasSpriteTexture *, get_SeinCurrentTexture, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F4A50, bool, MatchFrame, (app::GlideFeatherAnimator * this_ptr, app::String * name, app::GlideFeatherAnimator_AtlasAndSpriteTexture * texture));
IL2CPP_REGISTER_METHOD(0x007F4B80, void, FixedUpdate, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F4FC0, UberScreenMode__Enum, GetExternalUberScreenMode, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F5010, float, GetUberTweakValue, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F5060, bool, DoesProvideAtlas, (app::GlideFeatherAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F51A0, void, __ctor, (app::GlideFeatherAnimator * this_ptr));
}
