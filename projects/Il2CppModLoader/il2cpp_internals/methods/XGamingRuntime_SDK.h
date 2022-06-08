using namespace app;

namespace app::methods::XGamingRuntime::SDK {
IL2CPP_REGISTER_METHOD(0x030B44F0, NativeBool, EnumerateBlobInfoCallback, (XGameSaveBlobInfo interopBlobInfo, void * context));
IL2CPP_REGISTER_METHODINFO(0x047566A0, SDK_EnumerateBlobInfoCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030B4710, void, XGameSaveInitializeProviderAsync, (XUserHandle * userHandle, String * configurationId, bool syncOnDemand, XGameSaveInitializeProviderCompleted * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B4AD0, void, XGameSaveCloseProvider, (XGameSaveProviderHandle * gameSaveProviderHandle));
IL2CPP_REGISTER_METHOD(0x030B4B80, int32_t, XGameSaveCreateContainer, (XGameSaveProviderHandle * gameSaveProviderHandle, String * containerName, XGameSaveContainerHandle * * containerContext));
IL2CPP_REGISTER_METHOD(0x030B4DD0, void, XGameSaveCloseContainer, (XGameSaveContainerHandle * containerHandle));
IL2CPP_REGISTER_METHOD(0x030B4E80, int32_t, XGameSaveEnumerateBlobInfo, (XGameSaveContainerHandle * container, XGameSaveBlobInfo_1__Array * * blobInfos));
IL2CPP_REGISTER_METHOD(0x030B51C0, void, XGameSaveReadBlobDataAsync, (XGameSaveContainerHandle * container, String__Array * blobNames, XGameSaveReadBlobDataCompleted * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B5620, int32_t, XGameSaveCreateUpdate, (XGameSaveContainerHandle * container, String * containerDisplayName, XGameSaveUpdateHandle * * updateHandle));
IL2CPP_REGISTER_METHOD(0x030B5870, void, XGameSaveCloseUpdateHandle, (XGameSaveUpdateHandle * updateHandle));
IL2CPP_REGISTER_METHOD(0x030B5920, int32_t, XGameSaveSubmitBlobWrite, (XGameSaveUpdateHandle * updateHandle, String * blobName, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x030B5A50, int32_t, XGameSaveSubmitBlobDelete, (XGameSaveUpdateHandle * updateHandle, String * blobName));
IL2CPP_REGISTER_METHOD(0x030B5B40, void, XGameSaveSubmitUpdateAsync, (XGameSaveUpdateHandle * updateHandle, XGameSaveSubmitUpdateCompleted * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B5EB0, void, UserChangeEventCallback, (void * context, XUserLocalId userLocalId, XUserChangeEvent__Enum eventType));
IL2CPP_REGISTER_METHODINFO(0x0473ED98, SDK_UserChangeEventCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030B5FF0, void, XUserCloseHandle, (XUserHandle * user));
IL2CPP_REGISTER_METHOD(0x030B60C0, void, XUserAddAsync, (XUserAddOptions__Enum options, XUserAddCompleted * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B6400, int32_t, XUserGetId, (XUserHandle * user, uint64_t * userId));
IL2CPP_REGISTER_METHOD(0x030B64F0, int32_t, XUserGetGamertag, (XUserHandle * user, XUserGamertagComponent__Enum gamertagComponent, String * * gamertag));
IL2CPP_REGISTER_METHOD(0x030B6810, void, XUserGetGamerPictureAsync, (XUserHandle * user, XUserGamerPictureSize__Enum pictureSize, XUserGetGamerPictureCompleted * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B6BA0, void, XUserGetTokenAndSignatureUtf16Async, (XUserHandle * user, XUserGetTokenAndSignatureOptions__Enum options, String * method_1, String * url, XUserGetTokenAndSignatureUtf16HttpHeader__Array * headers, Byte__Array * body, XUserGetTokenAndSignatureUtf16Result * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B70E0, void, XUserResolveIssueWithUiUtf16Async, (XUserHandle * user, String * url, XUserResolveIssueWithUiUtf16Result * completionRoutine));
IL2CPP_REGISTER_METHOD(0x030B7470, int32_t, XUserRegisterForChangeEvent, (XUserChangeEventCallback * callback, XRegistrationToken * * registrationToken));
IL2CPP_REGISTER_METHOD(0x030B7890, void, XUserUnregisterForChangeEvent, (XRegistrationToken * registrationToken));
IL2CPP_REGISTER_METHOD(0x030B7960, int32_t, XGameRuntimeInitialize, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x030B7C20, void, XTaskQueueDispatch, (uint32_t timeoutMs));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
