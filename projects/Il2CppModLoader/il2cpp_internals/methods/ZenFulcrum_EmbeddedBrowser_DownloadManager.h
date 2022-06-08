#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::DownloadManager {
IL2CPP_REGISTER_METHOD(0x01DD70D0, void, Awake, (DownloadManager * __this));
IL2CPP_REGISTER_METHOD(0x01DD71D0, void, ManageDownloads, (DownloadManager * __this, Browser * browser));
IL2CPP_REGISTER_METHOD(0x01DD75B0, void, HandleDownloadStarted, (DownloadManager * __this, Browser * browser, int32_t downloadId, JSONNode * info));
IL2CPP_REGISTER_METHOD(0x01DD7D70, void, HandleDownloadStatus, (DownloadManager * __this, Browser * browser, int32_t downloadId, JSONNode * info));
IL2CPP_REGISTER_METHOD(0x01DD80B0, void, Update, (DownloadManager * __this));
IL2CPP_REGISTER_METHOD(0x01DD8190, void, PauseAll, (DownloadManager * __this));
IL2CPP_REGISTER_METHOD(0x01DD8390, void, ResumeAll, (DownloadManager * __this));
IL2CPP_REGISTER_METHOD(0x01DD8590, void, CancelAll, (DownloadManager * __this));
IL2CPP_REGISTER_METHOD(0x01DD8790, void, ClearAll, (DownloadManager * __this));
IL2CPP_REGISTER_METHOD(0x01DD8840, String *, get_Status, (DownloadManager * __this));
IL2CPP_REGISTER_METHOD(0x01DD8E50, String *, GetUserDownloadFolder, ());
IL2CPP_REGISTER_METHODINFO(0x04752BD8, DownloadManager_GetUserDownloadFolder__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DD9220, int32_t, SHGetKnownFolderPath, (Guid rfid, uint32_t dwFlags, void * hToken, void * * ppszPath));
IL2CPP_REGISTER_METHOD(0x01DD92E0, void, __ctor, (DownloadManager * __this));
}
