using namespace app;

namespace app::methods::XGamingRuntime::Interop::XGRInterop {
IL2CPP_REGISTER_METHOD(0x030B18E0, int32_t, XGameSaveInitializeProviderAsync, (XUserHandle_1 userContext, Byte__Array * configurationId, bool syncOnDemand, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B19B0, int32_t, XGameSaveInitializeProviderResult, (XAsyncBlockPtr asyncBlock, XGameSaveProviderHandle_1 * provider));
IL2CPP_REGISTER_METHOD(0x030B1A60, void, XGameSaveCloseProvider, (XGameSaveProviderHandle_1 provider));
IL2CPP_REGISTER_METHOD(0x030B1B00, int32_t, XGameSaveCreateContainer, (XGameSaveProviderHandle_1 provider, Byte__Array * containerName, XGameSaveContainerHandle_1 * containerContext));
IL2CPP_REGISTER_METHOD(0x030B1BC0, void, XGameSaveCloseContainer, (XGameSaveContainerHandle_1 containerContext));
IL2CPP_REGISTER_METHOD(0x030B1C60, int32_t, XGameSaveEnumerateBlobInfo, (XGameSaveContainerHandle_1 container, void * context, XGameSaveBlobInfoCallback * callback));
IL2CPP_REGISTER_METHOD(0x030B1D20, int32_t, XGameSaveReadBlobDataAsync, (XGameSaveContainerHandle_1 container, void * blobNames, uint32_t countOfBlobs, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B1DE0, int32_t, XGameSaveReadBlobDataResult, (XAsyncBlockPtr asyncBlock, SizeT blobsSize, void * allocatedBlobPtr, uint32_t * countOfBlobs));
IL2CPP_REGISTER_METHOD(0x030B1EA0, int32_t, XGameSaveCreateUpdate, (XGameSaveContainerHandle_1 container, Byte__Array * containerDisplayName, XGameSaveUpdateHandle_1 * updateContext));
IL2CPP_REGISTER_METHOD(0x030B1F60, void, XGameSaveCloseUpdate, (XGameSaveUpdateHandle_1 context));
IL2CPP_REGISTER_METHOD(0x030B2000, int32_t, XGameSaveSubmitBlobWrite, (XGameSaveUpdateHandle_1 context, Byte__Array * blobName, Byte__Array * data, SizeT byteCount));
IL2CPP_REGISTER_METHOD(0x030B20E0, int32_t, XGameSaveSubmitBlobDelete, (XGameSaveUpdateHandle_1 updateContext, Byte__Array * blobName));
IL2CPP_REGISTER_METHOD(0x030B2190, int32_t, XGameSaveSubmitUpdateAsync, (XGameSaveUpdateHandle_1 updateContext, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B2240, int32_t, XGameSaveSubmitUpdateResult, (XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B22E0, void, XUserCloseHandle, (XUserHandle_1 user));
IL2CPP_REGISTER_METHOD(0x030B2380, int32_t, XUserAddAsync, (XUserAddOptions__Enum addOptions, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B2430, int32_t, XUserAddResult, (XAsyncBlockPtr asyncBlock, XUserHandle_1 * newUser));
IL2CPP_REGISTER_METHOD(0x030B24E0, int32_t, XUserGetId, (XUserHandle_1 user, uint64_t * userId));
IL2CPP_REGISTER_METHOD(0x030B2590, int32_t, XUserGetGamertag, (XUserHandle_1 user, XUserGamertagComponent__Enum gamertagComponent, SizeT gamertagSize, Byte__Array * gamertag, SizeT * gamertagUsed));
IL2CPP_REGISTER_METHOD(0x030B2700, int32_t, XUserGetGamerPictureAsync, (XUserHandle_1 user, XUserGamerPictureSize__Enum pictureSize, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B27B0, int32_t, XUserGetGamerPictureResultSize, (XAsyncBlockPtr asyncBlock, SizeT * bufferSize));
IL2CPP_REGISTER_METHOD(0x030B2860, int32_t, XUserGetGamerPictureResult, (XAsyncBlockPtr asyncBlock, SizeT bufferSize, Byte__Array * buffer, SizeT * bufferUsed));
IL2CPP_REGISTER_METHOD(0x030B29C0, int32_t, XUserGetTokenAndSignatureUtf16Async, (XUserHandle_1 user, XUserGetTokenAndSignatureOptions__Enum options, String * method_1, String * url, SizeT headerCount, XUserGetTokenAndSignatureUtf16HttpHeader_1__Array * headers, SizeT bodySize, Byte__Array * body, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B2CE0, int32_t, XUserGetTokenAndSignatureUtf16ResultSize, (XAsyncBlockPtr asyncBlock, SizeT * bufferSize));
IL2CPP_REGISTER_METHOD(0x030B2D90, int32_t, XUserGetTokenAndSignatureUtf16Result, (XAsyncBlockPtr asyncBlock, SizeT bufferSize, void * buffer, void * * ptrToBuffer, SizeT * bufferUsed));
IL2CPP_REGISTER_METHOD(0x030B2E60, int32_t, XUserResolveIssueWithUiUtf16Async, (XUserHandle_1 user, String * url, XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B2F20, int32_t, XUserResolveIssueWithUiUtf16Result, (XAsyncBlockPtr asyncBlock));
IL2CPP_REGISTER_METHOD(0x030B2FC0, int32_t, XUserRegisterForChangeEvent, (XTaskQueueHandle queue, void * context, XUserChangeEventCallback_1 * callback, XTaskQueueRegistrationToken * token));
IL2CPP_REGISTER_METHOD(0x030B3090, bool, XUserUnregisterForChangeEvent, (XTaskQueueRegistrationToken token, bool wait));
IL2CPP_REGISTER_METHOD(0x030B3140, int32_t, XGameRuntimeInitialize, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x030B31D0, int32_t, XTaskQueueCreate, (XTaskQueueDispatchMode__Enum workDispatchMode, XTaskQueueDispatchMode__Enum completionDispatchMode, XTaskQueueHandle * queue));
IL2CPP_REGISTER_METHOD(0x030B3280, void, XTaskQueueDispatch, (XTaskQueueHandle queue, XTaskQueuePort__Enum port, uint32_t timeoutInMs));
IL2CPP_REGISTER_METHOD(0x030B3330, int32_t, XAsyncGetStatus, (XAsyncBlockPtr asyncBlock, bool wait));
IL2CPP_REGISTER_METHOD(0x030B33E0, int32_t, XAsyncGetResultSize, (XAsyncBlockPtr asyncBlock, SizeT * bufferSize));
}
