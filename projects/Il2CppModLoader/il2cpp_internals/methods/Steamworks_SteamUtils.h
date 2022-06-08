using namespace app;

namespace app::methods::Steamworks::SteamUtils {
IL2CPP_REGISTER_METHOD(0x027A5590, uint32_t, GetSecondsSinceAppActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A55B0, uint32_t, GetSecondsSinceComputerActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A55D0, EUniverse__Enum, GetConnectedUniverse, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A55F0, uint32_t, GetServerRealTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A5610, String *, GetIPCountry, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A5640, bool, GetImageSize, (int32_t iImage, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x027A5690, bool, GetImageRGBA, (int32_t iImage, Byte__Array * pubDest, int32_t nDestBufferSize));
IL2CPP_REGISTER_METHOD(0x027A56E0, bool, GetCSERIPPort, (uint32_t * unIP, uint16_t * usPort));
IL2CPP_REGISTER_METHOD(0x027A5720, uint8_t, GetCurrentBatteryPower, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A5740, AppId_t, GetAppID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A57F0, void, SetOverlayNotificationPosition, (ENotificationPosition__Enum eNotificationPosition));
IL2CPP_REGISTER_METHOD(0x027A5820, bool, IsAPICallCompleted, (SteamAPICall_t hSteamAPICall, bool * pbFailed));
IL2CPP_REGISTER_METHOD(0x027A5860, ESteamAPICallFailure__Enum, GetAPICallFailureReason, (SteamAPICall_t hSteamAPICall));
IL2CPP_REGISTER_METHOD(0x027A5890, bool, GetAPICallResult, (SteamAPICall_t hSteamAPICall, void * pCallback, int32_t cubCallback, int32_t iCallbackExpected, bool * pbFailed));
IL2CPP_REGISTER_METHOD(0x027A5900, uint32_t, GetIPCCallCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A5920, void, SetWarningMessageHook, (SteamAPIWarningMessageHook_t * pFunction));
IL2CPP_REGISTER_METHOD(0x027A5950, bool, IsOverlayEnabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A5970, bool, BOverlayNeedsPresent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A5990, SteamAPICall_t, CheckFileSignature, (String * szFileName));
IL2CPP_REGISTER_METHOD(0x027A5BB0, bool, ShowGamepadTextInput, (EGamepadTextInputMode__Enum eInputMode, EGamepadTextInputLineMode__Enum eLineInputMode, String * pchDescription, uint32_t unCharMax, String * pchExistingText));
IL2CPP_REGISTER_METHOD(0x027A5F00, uint32_t, GetEnteredGamepadTextLength, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A5F20, bool, GetEnteredGamepadTextInput, (String * * pchText, uint32_t cchText));
IL2CPP_REGISTER_METHOD(0x027A6040, String *, GetSteamUILanguage, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A6070, bool, IsSteamRunningInVR, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A6090, void, SetOverlayNotificationInset, (int32_t nHorizontalInset, int32_t nVerticalInset));
IL2CPP_REGISTER_METHOD(0x027A60D0, bool, IsSteamInBigPictureMode, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A60F0, void, StartVRDashboard, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A6110, bool, IsVRHeadsetStreamingEnabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A6130, void, SetVRHeadsetStreamingEnabled, (bool bEnabled));
IL2CPP_REGISTER_METHOD(0x027A6160, bool, IsSteamChinaLauncher, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A6180, bool, InitFilterText, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A61A0, int32_t, FilterText, (String * * pchOutFilteredText, uint32_t nByteSizeOutFilteredText, String * pchInputMessage, bool bLegalOnly));
}
