using namespace app;

namespace app::methods::VerticalCameraSettingsZone {
IL2CPP_REGISTER_METHOD(0x013D4130, Vector3, get_PostPosition, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_Weight, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x0043C100, void, set_Weight, (VerticalCameraSettingsZone * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, CameraSettings *, get_Settings, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, PostProcessInfluencerOrder__Enum, get_PostInfluenceApplyOrder, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x013D4320, CameraSettingsAsset *, get_SettingsAssetForDebug, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x013D43E0, void, Enable, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x013D4AD0, void, OnEnable, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x013D4AE0, void, OnDisable, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x013D4B90, void, SortItems, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x013D4DB0, void, StartUpdateCameraSettings, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x013D4F90, float, get_Radius, (VerticalCameraSettingsZone * __this));
IL2CPP_REGISTER_METHOD(0x013D5060, void, Advance, (VerticalCameraSettingsZone * __this, Vector2 position, float timeDelta));
IL2CPP_REGISTER_METHOD(0x013D53B0, void, UpdatePostInfluence, (VerticalCameraSettingsZone * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x013D5490, void, PostUpdatePostInfluence, (VerticalCameraSettingsZone * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x013D5680, bool, IsInside, (VerticalCameraSettingsZone * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x013D56D0, void, __ctor, (VerticalCameraSettingsZone * __this));
}
