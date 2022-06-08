using namespace app;

namespace app::methods::ShadowEmitter {
IL2CPP_REGISTER_METHOD(0x005A93B0, Transform *, get_GroundAnchorSafe, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9500, Transform *, get_PerspectiveAnchorSafe, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9650, Ray, get_CastRay, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9960, float, get_GroundDistance, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9B10, float, get_NormalizedGroundDistance, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9BF0, bool, ValidateUpdate, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9CE0, void, Awake, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9DE0, void, OnEnable, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9E50, void, CacheGraphics, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9EF0, void, Update, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005A9F30, void, UpdateGraphics, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005AA380, void, UpdateAnchors, (ShadowEmitter * __this));
IL2CPP_REGISTER_METHOD(0x005AA910, void, ComputeGroundAnchor, (ShadowEmitter * __this, Vector3 * position, Vector3 * normal));
IL2CPP_REGISTER_METHOD(0x005AAC50, void, __ctor, (ShadowEmitter * __this));
}
