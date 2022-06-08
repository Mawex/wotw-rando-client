using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRSystem {
IL2CPP_REGISTER_METHOD(0x0167BAF0, void, __ctor, (CVRSystem * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x0167BCA0, void, GetRecommendedRenderTargetSize, (CVRSystem * __this, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x0167BCD0, HmdMatrix44_t, GetProjectionMatrix, (CVRSystem * __this, EVREye__Enum eEye, float fNearZ, float fFarZ));
IL2CPP_REGISTER_METHOD(0x0167BD40, void, GetProjectionRaw, (CVRSystem * __this, EVREye__Enum eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom));
IL2CPP_REGISTER_METHOD(0x0167BD80, bool, ComputeDistortion, (CVRSystem * __this, EVREye__Enum eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates));
IL2CPP_REGISTER_METHOD(0x0167BDB0, HmdMatrix34_t, GetEyeToHeadTransform, (CVRSystem * __this, EVREye__Enum eEye));
IL2CPP_REGISTER_METHOD(0x0167BE00, bool, GetTimeSinceLastVsync, (CVRSystem * __this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter));
IL2CPP_REGISTER_METHOD(0x0167BE30, int32_t, GetD3D9AdapterIndex, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167BE50, void, GetDXGIOutputInfo, (CVRSystem * __this, int32_t * pnAdapterIndex));
IL2CPP_REGISTER_METHOD(0x0167BE80, void, GetOutputDevice, (CVRSystem * __this, uint64_t * pnDevice, ETextureType__Enum textureType, void * pInstance));
IL2CPP_REGISTER_METHOD(0x0167BEB0, bool, IsDisplayOnDesktop, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167BED0, bool, SetDisplayVisibility, (CVRSystem * __this, bool bIsVisibleOnDesktop));
IL2CPP_REGISTER_METHOD(0x0167BEF0, void, GetDeviceToAbsoluteTrackingPose, (CVRSystem * __this, ETrackingUniverseOrigin__Enum eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t__Array * pTrackedDevicePoseArray));
IL2CPP_REGISTER_METHOD(0x00F846A0, void, ResetSeatedZeroPose, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167BF30, HmdMatrix34_t, GetSeatedZeroPoseToStandingAbsoluteTrackingPose, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167BF80, HmdMatrix34_t, GetRawZeroPoseToStandingAbsoluteTrackingPose, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167BFD0, uint32_t, GetSortedTrackedDeviceIndicesOfClass, (CVRSystem * __this, ETrackedDeviceClass__Enum eTrackedDeviceClass, UInt32__Array * punTrackedDeviceIndexArray, uint32_t unRelativeToTrackedDeviceIndex));
IL2CPP_REGISTER_METHOD(0x0167C010, EDeviceActivityLevel__Enum, GetTrackedDeviceActivityLevel, (CVRSystem * __this, uint32_t unDeviceId));
IL2CPP_REGISTER_METHOD(0x0167C040, void, ApplyTransform, (CVRSystem * __this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform));
IL2CPP_REGISTER_METHOD(0x0167C070, uint32_t, GetTrackedDeviceIndexForControllerRole, (CVRSystem * __this, ETrackedControllerRole__Enum unDeviceType));
IL2CPP_REGISTER_METHOD(0x0167C0A0, ETrackedControllerRole__Enum, GetControllerRoleForTrackedDeviceIndex, (CVRSystem * __this, uint32_t unDeviceIndex));
IL2CPP_REGISTER_METHOD(0x0167C0D0, ETrackedDeviceClass__Enum, GetTrackedDeviceClass, (CVRSystem * __this, uint32_t unDeviceIndex));
IL2CPP_REGISTER_METHOD(0x0167C100, bool, IsTrackedDeviceConnected, (CVRSystem * __this, uint32_t unDeviceIndex));
IL2CPP_REGISTER_METHOD(0x0167C130, bool, GetBoolTrackedDeviceProperty, (CVRSystem * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x0167C160, float, GetFloatTrackedDeviceProperty, (CVRSystem * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x0167C190, int32_t, GetInt32TrackedDeviceProperty, (CVRSystem * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x0167C1C0, uint64_t, GetUint64TrackedDeviceProperty, (CVRSystem * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x0167C1F0, HmdMatrix34_t, GetMatrix34TrackedDeviceProperty, (CVRSystem * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x0167C250, uint32_t, GetStringTrackedDeviceProperty, (CVRSystem * __this, uint32_t unDeviceIndex, ETrackedDeviceProperty__Enum prop, StringBuilder * pchValue, uint32_t unBufferSize, ETrackedPropertyError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x0167C280, String *, GetPropErrorNameFromEnum, (CVRSystem * __this, ETrackedPropertyError__Enum error));
IL2CPP_REGISTER_METHOD(0x0167C370, bool, PollNextEvent, (CVRSystem * __this, VREvent_t * pEvent, uint32_t uncbVREvent));
IL2CPP_REGISTER_METHOD(0x0167C600, bool, PollNextEventWithPose, (CVRSystem * __this, ETrackingUniverseOrigin__Enum eOrigin, VREvent_t * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose));
IL2CPP_REGISTER_METHOD(0x0167C630, String *, GetEventTypeNameFromEnum, (CVRSystem * __this, EVREventType__Enum eType));
IL2CPP_REGISTER_METHOD(0x0167C720, HiddenAreaMesh_t, GetHiddenAreaMesh, (CVRSystem * __this, EVREye__Enum eEye, EHiddenAreaMeshType__Enum type));
IL2CPP_REGISTER_METHOD(0x0167C760, bool, GetControllerState, (CVRSystem * __this, uint32_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize));
IL2CPP_REGISTER_METHOD(0x0167CB40, bool, GetControllerStateWithPose, (CVRSystem * __this, ETrackingUniverseOrigin__Enum eOrigin, uint32_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose));
IL2CPP_REGISTER_METHOD(0x0167CF50, void, TriggerHapticPulse, (CVRSystem * __this, uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec));
IL2CPP_REGISTER_METHOD(0x0167CF80, String *, GetButtonIdNameFromEnum, (CVRSystem * __this, EVRButtonId__Enum eButtonId));
IL2CPP_REGISTER_METHOD(0x0167D070, String *, GetControllerAxisTypeNameFromEnum, (CVRSystem * __this, EVRControllerAxisType__Enum eAxisType));
IL2CPP_REGISTER_METHOD(0x0167D160, bool, CaptureInputFocus, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167D190, void, ReleaseInputFocus, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167D1C0, bool, IsInputFocusCapturedByAnotherProcess, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167D1F0, uint32_t, DriverDebugRequest, (CVRSystem * __this, uint32_t unDeviceIndex, String * pchRequest, String * pchResponseBuffer, uint32_t unResponseBufferSize));
IL2CPP_REGISTER_METHOD(0x0167D220, EVRFirmwareError__Enum, PerformFirmwareUpdate, (CVRSystem * __this, uint32_t unDeviceIndex));
IL2CPP_REGISTER_METHOD(0x0167D250, void, AcknowledgeQuit_Exiting, (CVRSystem * __this));
IL2CPP_REGISTER_METHOD(0x0167D280, void, AcknowledgeQuit_UserPrompt, (CVRSystem * __this));
}
