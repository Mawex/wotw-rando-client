using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRScreenshots {
IL2CPP_REGISTER_METHOD(0x0167B4A0, void, __ctor, (CVRScreenshots * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x0167B5D0, EVRScreenshotError__Enum, RequestScreenshot, (CVRScreenshots * __this, uint32_t * pOutScreenshotHandle, EVRScreenshotType__Enum type, String * pchPreviewFilename, String * pchVRFilename));
IL2CPP_REGISTER_METHOD(0x0167B600, EVRScreenshotError__Enum, HookScreenshot, (CVRScreenshots * __this, EVRScreenshotType__Enum__Array * pSupportedTypes));
IL2CPP_REGISTER_METHOD(0x0167A550, EVRScreenshotType__Enum, GetScreenshotPropertyType, (CVRScreenshots * __this, uint32_t screenshotHandle, EVRScreenshotError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x0167B630, uint32_t, GetScreenshotPropertyFilename, (CVRScreenshots * __this, uint32_t screenshotHandle, EVRScreenshotPropertyFilenames__Enum filenameType, StringBuilder * pchFilename, uint32_t cchFilename, EVRScreenshotError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x0167B660, EVRScreenshotError__Enum, UpdateScreenshotProgress, (CVRScreenshots * __this, uint32_t screenshotHandle, float flProgress));
IL2CPP_REGISTER_METHOD(0x0167B680, EVRScreenshotError__Enum, TakeStereoScreenshot, (CVRScreenshots * __this, uint32_t * pOutScreenshotHandle, String * pchPreviewFilename, String * pchVRFilename));
IL2CPP_REGISTER_METHOD(0x0167B6B0, EVRScreenshotError__Enum, SubmitScreenshot, (CVRScreenshots * __this, uint32_t screenshotHandle, EVRScreenshotType__Enum type, String * pchSourcePreviewFilename, String * pchSourceVRFilename));
}
