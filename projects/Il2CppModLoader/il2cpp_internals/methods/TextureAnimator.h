using namespace app;

namespace app::methods::TextureAnimator {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_SpeedMultiplier, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_SpeedMultiplier, (TextureAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x010EA2E0, void, __ctor, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010EA4C0, void, Advance, (TextureAnimator * __this, float timeDelta));
IL2CPP_REGISTER_METHOD(0x010EA500, float, get_AnimationDuration, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010EA5E0, void, ConstrainTime, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010EA7C0, void, SetAnimation, (TextureAnimator * __this, TextureAnimation * animation, bool resetTime));
IL2CPP_REGISTER_METHOD(0x002FBB00, TextureAnimation *, get_Animation, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010EA8B0, AtlasSpriteTexture *, get_Texture, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_Time, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010EA9A0, void, set_Time, (TextureAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x010EA9B0, float, get_Frame, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010EA9E0, void, set_Frame, (TextureAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x010EAA10, bool, get_AnimationEnded, (TextureAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010EAB10, float, GetRotationFromMetaData, (TextureAnimator * __this, String * name));
}
