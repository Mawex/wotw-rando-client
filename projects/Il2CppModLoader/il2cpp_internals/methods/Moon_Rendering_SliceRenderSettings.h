using namespace app;

namespace app::methods::Moon::Rendering::SliceRenderSettings {
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_NoDofSliceA, (SliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_NoDofSliceA, (SliceRenderSettings * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NoDofSliceB, (SliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_NoDofSliceB, (SliceRenderSettings * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00EBCB30, int32_t, get_Count, (SliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00EBCB40, SliceRenderSettings_Slice, GetSlice, (SliceRenderSettings * __this, int32_t idx));
IL2CPP_REGISTER_METHOD(0x00EBCB90, void, SetSlice, (SliceRenderSettings * __this, int32_t idx, SliceRenderSettings_Slice slice));
IL2CPP_REGISTER_METHOD(0x00EBCB40, SliceRenderSettings_Slice, get_Item, (SliceRenderSettings * __this, int32_t idx));
IL2CPP_REGISTER_METHOD(0x00EBCBF0, void, __ctor, (SliceRenderSettings * __this, LayeredRenderSettings * layeredRenderSettings));
IL2CPP_REGISTER_METHOD(0x00EBCEA0, void, __ctor, (SliceRenderSettings * __this, SliceRenderSettings * settingsToCopyFrom));
IL2CPP_REGISTER_METHOD(0x00EBCFF0, void, GenerateDefault, (SliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00EBD090, void, __ctor, (SliceRenderSettings * __this, AnimationCurve * DepthOfFieldCurve, LayeredRenderSettings * layeredRenderSettings, MoonRenderPipelineAsset * srpAsset));
IL2CPP_REGISTER_METHOD(0x00EBD4F0, void, Validate, (SliceRenderSettings * __this, LayeredRenderSettings * layeredRenderSettings));
IL2CPP_REGISTER_METHOD(0x00EBD610, int32_t, Validate, (SliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00EBD8A0, void, UpdateNoDofSlicesIdx, (SliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (SliceRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnAfterDeserialize, (SliceRenderSettings * __this));
}
