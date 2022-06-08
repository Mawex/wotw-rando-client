#include <interception_macros.h>

namespace app::methods::PointLightMaskModifier {
IL2CPP_REGISTER_METHOD(0x0142FB20, Color, get_LightColor, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x01301D30, float, get_CullingScore, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B31760, void, set_CullingScore, (PointLightMaskModifier * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (PointLightMaskModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x0142FC40, void, SetProperties, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FBD40, Renderer *, get_CachedRenderer, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FBD60, MeshFilter *, get_MeshFilter, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x01430B10, void, Awake, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x01430B20, void, OnEnable, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x01430BF0, void, OnDisable, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, ICullingCategoryItem_get_IsValid, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x01430CC0, void, OnBuild, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x01430CE0, void, CacheComponents, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x01430D90, void, __ctor, (PointLightMaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x014317E0, void, __cctor, ());
}
