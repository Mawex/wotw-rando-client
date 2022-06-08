using namespace app;

namespace app::methods::SystemIntegration::Races::PlayFabFileUploader {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (PlayFabFileUploader * __this, String * fileName, Byte__Array * data, String * ownerId));
IL2CPP_REGISTER_METHOD(0x00522860, Task_1_System_Boolean_ *, Perform, (PlayFabFileUploader * __this));
IL2CPP_REGISTER_METHOD(0x00522FF0, void, OnInitFileUpload, (PlayFabFileUploader * __this, InitiateFileUploadsResponse * response));
IL2CPP_REGISTER_METHODINFO(0x04769C70, PlayFabFileUploader_OnInitFileUpload__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00523380, void, OnInitFailed, (PlayFabFileUploader * __this, PlayFabError * error));
IL2CPP_REGISTER_METHODINFO(0x04733BD0, PlayFabFileUploader_OnInitFailed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00523A50, void, FinalizeUpload, (PlayFabFileUploader * __this, Byte__Array * obj));
IL2CPP_REGISTER_METHODINFO(0x04718070, PlayFabFileUploader_FinalizeUpload__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00524000, void, OnUploadSuccess, (PlayFabFileUploader * __this, FinalizeFileUploadsResponse * response));
IL2CPP_REGISTER_METHODINFO(0x04797718, PlayFabFileUploader_OnUploadSuccess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00524150, void, OnUploadFailed, (PlayFabFileUploader * __this, PlayFabError * error));
IL2CPP_REGISTER_METHODINFO(0x047120E8, PlayFabFileUploader_OnUploadFailed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00524330, void, _OnInitFileUpload_b__6_0, (PlayFabFileUploader * __this, String * err));
IL2CPP_REGISTER_METHODINFO(0x0470B938, PlayFabFileUploader__OnInitFileUpload_b__6_0__MethodInfo);
}
