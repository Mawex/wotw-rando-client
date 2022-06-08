using namespace app;

namespace app::methods::ColorVariation {
IL2CPP_REGISTER_METHOD(0x00CFBCF0, bool, get_IsVisible, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D44E0, void, Awake, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D44F0, Vector4, GetSliceRanges, (ColorVariation * __this, float z, LayeredRenderSettings * layeredRenderSetting));
IL2CPP_REGISTER_METHOD(0x012D4740, void, CacheRenderers, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D5260, void, OnEnable, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D53C0, void, Show, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D53D0, void, Hide, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D53E0, void, FixedUpdate, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D5510, void, Sample, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D5810, Color, SetAlpha, (ColorVariation * __this, Color color, float alpha));
IL2CPP_REGISTER_METHOD(0x012D5840, void, FillPropertiesForShaders, (ColorVariation * __this, Vector4__Array * * colors, Vector4__Array * * NzDWH, Vector4__Array * * PlaneO, Vector4__Array * * MainTexScaleOffset, Vector4__Array * * MainTexScroll, Vector4__Array * * DistortionScaleOffset, Vector4__Array * * DistortionScrollStrength, Vector4__Array * * SlicesRanges, int32_t startPos, int32_t planesCount));
IL2CPP_REGISTER_METHOD(0x012D6050, void, FillZeroPropertiesForShaders, (Vector4__Array * * colors, Vector4__Array * * NzDWH, Vector4__Array * * PlaneO, Vector4__Array * * MainTexScaleOffset, Vector4__Array * * MainTexScroll, Vector4__Array * * DistortionScaleOffset, Vector4__Array * * DistortionScrollStrength, Vector4__Array * * SlicesRanges, int32_t startPos, int32_t planesCount));
IL2CPP_REGISTER_METHOD(0x00443C10, void, OnBeforeSerialize, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D6380, void, OnBeforeStrip, (ColorVariation * __this));
IL2CPP_REGISTER_METHOD(0x012D6570, void, __ctor, (ColorVariation * __this));
}
