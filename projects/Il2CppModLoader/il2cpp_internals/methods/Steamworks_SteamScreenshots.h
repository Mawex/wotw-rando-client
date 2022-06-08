using namespace app;

namespace app::methods::Steamworks::SteamScreenshots {
IL2CPP_REGISTER_METHOD(0x02797530, ScreenshotHandle, WriteScreenshot, (Byte__Array * pubRGB, uint32_t cubRGB, int32_t nWidth, int32_t nHeight));
IL2CPP_REGISTER_METHOD(0x027976A0, ScreenshotHandle, AddScreenshotToLibrary, (String * pchFilename, String * pchThumbnailFilename, int32_t nWidth, int32_t nHeight));
IL2CPP_REGISTER_METHOD(0x02797B20, void, TriggerScreenshot, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02797BD0, void, HookScreenshots, (bool bHook));
IL2CPP_REGISTER_METHOD(0x02797C90, bool, SetLocation, (ScreenshotHandle hScreenshot, String * pchLocation));
IL2CPP_REGISTER_METHOD(0x02797F80, bool, TagUser, (ScreenshotHandle hScreenshot, CSteamID steamID));
IL2CPP_REGISTER_METHOD(0x02798050, bool, TagPublishedFile, (ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID));
IL2CPP_REGISTER_METHOD(0x02798120, bool, IsScreenshotsHooked, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027981D0, ScreenshotHandle, AddVRScreenshotToLibrary, (EVRScreenshotType__Enum_1 eType, String * pchFilename, String * pchVRFilename));
}
