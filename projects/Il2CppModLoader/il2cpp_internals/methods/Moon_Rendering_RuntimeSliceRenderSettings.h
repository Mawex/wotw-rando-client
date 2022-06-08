using namespace app;

namespace app::methods::Moon::Rendering::RuntimeSliceRenderSettings {
IL2CPP_REGISTER_METHOD(0x002FA280, SceneDefaultSettingsHelper *, get_DefaultSettingsHelper, (RuntimeSliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00EB37B0, int32_t, get_SliceRenderInfluenceCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EB3860, void, RegisterLayeredRenderInfluencer, (ILayeredRenderInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x00EB3980, void, UnregisterLayeredInfluencer, (ILayeredRenderInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x00EB3AA0, void, RegisterSlicesInfluencer, (ISliceRenderSettingsInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x00EB3D30, void, UnregisterSlicesInfluencer, (ISliceRenderSettingsInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x00EB3E50, void, MoveCamera, (RuntimeSliceRenderSettings * __this, Vector3 cameraPos, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00EB3E80, SliceRenderSettings *, GetSliceRenderSettings, (RuntimeSliceRenderSettings * __this, SceneSettings * setting));
IL2CPP_REGISTER_METHOD(0x00EB3F80, void, Update, (RuntimeSliceRenderSettings * __this, SliceRenderSettings * * outSRS, LayeredRenderSettings * * outLRS, MotionBlurController * * outMB, MoonRenderPipelineAsset * srpAsset));
IL2CPP_REGISTER_METHOD(0x00EB4920, void, ApplyLayerSettings, (RuntimeSliceRenderSettings * __this, LayeredRenderSettings * * destination, LayeredRenderSettings * settings, float weight));
IL2CPP_REGISTER_METHOD(0x00EB4BB0, void, GenerateAllSlices, (RuntimeSliceRenderSettings * __this, SliceRenderSettings * from, SliceRenderSettings * to, LayeredRenderSettings * fromLayer, LayeredRenderSettings * toLayer, float dofTweenTime, MoonRenderPipelineAsset * srpAsset));
IL2CPP_REGISTER_METHOD(0x00EB4E50, void, GenerateSlice, (RuntimeSliceRenderSettings * __this, int32_t sliceIdx, SliceRenderSettings * from, SliceRenderSettings * to, LayeredRenderSettings * fromLayer, LayeredRenderSettings * toLayer, float dofTweenTime, MoonRenderPipelineAsset * srpAsset, bool shouldDoUiBackgroundBlur));
IL2CPP_REGISTER_METHOD(0x00EB54E0, void, AnimateDof, (RuntimeSliceRenderSettings * __this, int32_t idx, SliceRenderSettings_Slice * sliceSetting, SliceRenderSettings * settings));
IL2CPP_REGISTER_METHOD(0x00EB5890, bool, IgnoreDof, (RuntimeSliceRenderSettings * __this, SliceRenderSettings * settings, int32_t index));
IL2CPP_REGISTER_METHOD(0x00EB5990, void, __ctor, (RuntimeSliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00EB5AE0, void, __cctor, (MethodInfo * method));
}
