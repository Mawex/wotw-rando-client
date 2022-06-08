#include <interception_macros.h>

namespace app::methods::SystemIntegration::Races::PlayFabFileDownloader {
IL2CPP_REGISTER_METHOD(0x00521550, void, __ctor, (PlayFabFileDownloader * __this, String * ownerId, String * fileName, RaceDataLeaderBoardType__Enum data, int32_t maxSize));
IL2CPP_REGISTER_METHOD(0x00521570, Task_1_System_Byte_ *, Perform, (PlayFabFileDownloader * __this));
IL2CPP_REGISTER_METHOD(0x00521B10, void, OnGetFileMeta, (PlayFabFileDownloader * __this, GetFilesResponse * result));
IL2CPP_REGISTER_METHODINFO(0x047938F8, PlayFabFileDownloader_OnGetFileMeta__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00521E40, void, GetActualFile, (PlayFabFileDownloader * __this, GetFileMetadata * fileData));
IL2CPP_REGISTER_METHOD(0x005221F0, void, FileDownloadComplete, (PlayFabFileDownloader * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x0475CB38, PlayFabFileDownloader_FileDownloadComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00522290, void, OnError, (PlayFabFileDownloader * __this, PlayFabError * obj));
IL2CPP_REGISTER_METHODINFO(0x0474BB90, PlayFabFileDownloader_OnError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005223D0, bool, _OnGetFileMeta_b__7_1, (PlayFabFileDownloader * __this, GetFileMetadata * o));
IL2CPP_REGISTER_METHODINFO(0x04721A20, PlayFabFileDownloader__OnGetFileMeta_b__7_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00522420, void, _GetActualFile_b__8_0, (PlayFabFileDownloader * __this, String * err));
IL2CPP_REGISTER_METHODINFO(0x047692A8, PlayFabFileDownloader__GetActualFile_b__8_0__MethodInfo);
}
