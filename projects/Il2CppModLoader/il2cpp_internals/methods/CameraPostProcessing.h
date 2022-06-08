#include <interception_macros.h>

namespace app::methods::CameraPostProcessing {
IL2CPP_REGISTER_METHOD(0x0169F5E0, List_1_IPostProcessInfluencer_ *, get_Influencers, ());
IL2CPP_REGISTER_METHOD(0x002FB990, CameraSettings *, get_CameraSettingsToUse, (CameraPostProcessing * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, SceneDefaultSettingsHelper *, get_SceneSettingsHelper, (CameraPostProcessing * __this));
IL2CPP_REGISTER_METHOD(0x0169F680, void, SaveCameraSettings, (CameraPostProcessing * __this, CameraSettingsAsset * cameraSettings));
IL2CPP_REGISTER_METHOD(0x0169F6A0, void, ApplyCameraSettings, (CameraPostProcessing * __this, CameraSettings * cameraSettings));
IL2CPP_REGISTER_METHOD(0x0169F870, void, Apply, (CameraPostProcessing * __this));
IL2CPP_REGISTER_METHOD(0x0169F8A0, void, Advance, (CameraPostProcessing * __this, float timeDelta));
IL2CPP_REGISTER_METHOD(0x016A0860, void, AddPostInfluencer, (IPostProcessInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x016A0B10, void, RemovePostInfluencer, (IPostProcessInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x016A0C30, bool, IsPostInfluencerRegistered, (IPostProcessInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x016A0CF0, void, SetCameraSettings, (CameraPostProcessing * __this, CameraSettings * cameraSettings, bool forceApplyToSceneCamera));
IL2CPP_REGISTER_METHOD(0x016A0D30, void, ForceFogIntoCurrentCameraSettings, (CameraPostProcessing * __this, FogGradientController * fogGradientController));
IL2CPP_REGISTER_METHOD(0x01132D30, void, ResetFog, (CameraPostProcessing * __this));
IL2CPP_REGISTER_METHOD(0x01132D30, void, ForceApplySettings, (CameraPostProcessing * __this));
IL2CPP_REGISTER_METHOD(0x016A0DC0, void, __ctor, (CameraPostProcessing * __this));
IL2CPP_REGISTER_METHOD(0x016A10F0, void, __cctor, ());
}
