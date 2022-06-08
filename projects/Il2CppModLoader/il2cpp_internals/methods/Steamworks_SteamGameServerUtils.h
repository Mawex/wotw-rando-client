using namespace app;

namespace app::methods::Steamworks::SteamGameServerUtils {
IL2CPP_REGISTER_METHOD(0x02803E40, uint32_t, GetSecondsSinceAppActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02803E60, uint32_t, GetSecondsSinceComputerActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02803E80, EUniverse__Enum, GetConnectedUniverse, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02803EA0, uint32_t, GetServerRealTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02803EC0, String *, GetIPCountry, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02803EF0, bool, GetImageSize, (int32_t iImage, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x02803F40, bool, GetImageRGBA, (int32_t iImage, Byte__Array * pubDest, int32_t nDestBufferSize));
IL2CPP_REGISTER_METHOD(0x02803F90, bool, GetCSERIPPort, (uint32_t * unIP, uint16_t * usPort));
IL2CPP_REGISTER_METHOD(0x02803FD0, uint8_t, GetCurrentBatteryPower, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02803FF0, AppId_t, GetAppID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028040A0, void, SetOverlayNotificationPosition, (ENotificationPosition__Enum eNotificationPosition));
IL2CPP_REGISTER_METHOD(0x028040D0, bool, IsAPICallCompleted, (SteamAPICall_t hSteamAPICall, bool * pbFailed));
IL2CPP_REGISTER_METHOD(0x02804110, ESteamAPICallFailure__Enum, GetAPICallFailureReason, (SteamAPICall_t hSteamAPICall));
IL2CPP_REGISTER_METHOD(0x02804140, bool, GetAPICallResult, (SteamAPICall_t hSteamAPICall, void * pCallback, int32_t cubCallback, int32_t iCallbackExpected, bool * pbFailed));
IL2CPP_REGISTER_METHOD(0x028041B0, uint32_t, GetIPCCallCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028041D0, void, SetWarningMessageHook, (SteamAPIWarningMessageHook_t * pFunction));
IL2CPP_REGISTER_METHOD(0x02804200, bool, IsOverlayEnabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02804220, bool, BOverlayNeedsPresent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02804240, SteamAPICall_t, CheckFileSignature, (String * szFileName));
IL2CPP_REGISTER_METHOD(0x02804460, bool, ShowGamepadTextInput, (EGamepadTextInputMode__Enum eInputMode, EGamepadTextInputLineMode__Enum eLineInputMode, String * pchDescription, uint32_t unCharMax, String * pchExistingText));
IL2CPP_REGISTER_METHOD(0x028047B0, uint32_t, GetEnteredGamepadTextLength, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028047D0, bool, GetEnteredGamepadTextInput, (String * * pchText, uint32_t cchText));
IL2CPP_REGISTER_METHOD(0x028048F0, String *, GetSteamUILanguage, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02804920, bool, IsSteamRunningInVR, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02804940, void, SetOverlayNotificationInset, (int32_t nHorizontalInset, int32_t nVerticalInset));
IL2CPP_REGISTER_METHOD(0x02804980, bool, IsSteamInBigPictureMode, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028049A0, void, StartVRDashboard, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028049C0, bool, IsVRHeadsetStreamingEnabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028049E0, void, SetVRHeadsetStreamingEnabled, (bool bEnabled));
IL2CPP_REGISTER_METHOD(0x02804A10, bool, IsSteamChinaLauncher, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02804A30, bool, InitFilterText, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02804A50, int32_t, FilterText, (String * * pchOutFilteredText, uint32_t nByteSizeOutFilteredText, String * pchInputMessage, bool bLegalOnly));
}
