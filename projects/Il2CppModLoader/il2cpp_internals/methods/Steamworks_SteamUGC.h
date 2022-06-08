using namespace app;

namespace app::methods::Steamworks::SteamUGC {
IL2CPP_REGISTER_METHOD(0x02798650, UGCQueryHandle_t, CreateQueryUserUGCRequest, (AccountID_t unAccountID, EUserUGCList__Enum eListType, EUGCMatchingUGCType__Enum eMatchingUGCType, EUserUGCListSortOrder__Enum eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32_t unPage));
IL2CPP_REGISTER_METHOD(0x02798760, UGCQueryHandle_t, CreateQueryAllUGCRequest, (EUGCQuery__Enum eQueryType, EUGCMatchingUGCType__Enum eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32_t unPage));
IL2CPP_REGISTER_METHOD(0x02798860, UGCQueryHandle_t, CreateQueryAllUGCRequest, (EUGCQuery__Enum eQueryType, EUGCMatchingUGCType__Enum eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, String * pchCursor));
IL2CPP_REGISTER_METHOD(0x02798AC0, UGCQueryHandle_t, CreateQueryUGCDetailsRequest, (PublishedFileId_t__Array * pvecPublishedFileID, uint32_t unNumPublishedFileIDs));
IL2CPP_REGISTER_METHOD(0x02798B90, SteamAPICall_t, SendQueryUGCRequest, (UGCQueryHandle_t handle));
IL2CPP_REGISTER_METHOD(0x02798C40, bool, GetQueryUGCResult, (UGCQueryHandle_t handle, uint32_t index, SteamUGCDetails_t * pDetails));
IL2CPP_REGISTER_METHOD(0x02798C90, bool, GetQueryUGCPreviewURL, (UGCQueryHandle_t handle, uint32_t index, String * * pchURL, uint32_t cchURLSize));
IL2CPP_REGISTER_METHOD(0x02798DC0, bool, GetQueryUGCMetadata, (UGCQueryHandle_t handle, uint32_t index, String * * pchMetadata, uint32_t cchMetadatasize));
IL2CPP_REGISTER_METHOD(0x02798EF0, bool, GetQueryUGCChildren, (UGCQueryHandle_t handle, uint32_t index, PublishedFileId_t__Array * pvecPublishedFileID, uint32_t cMaxEntries));
IL2CPP_REGISTER_METHOD(0x02798F50, bool, GetQueryUGCStatistic, (UGCQueryHandle_t handle, uint32_t index, EItemStatistic__Enum eStatType, uint64_t * pStatValue));
IL2CPP_REGISTER_METHOD(0x02798FC0, uint32_t, GetQueryUGCNumAdditionalPreviews, (UGCQueryHandle_t handle, uint32_t index));
IL2CPP_REGISTER_METHOD(0x02799000, bool, GetQueryUGCAdditionalPreview, (UGCQueryHandle_t handle, uint32_t index, uint32_t previewIndex, String * * pchURLOrVideoID, uint32_t cchURLSize, String * * pchOriginalFileName, uint32_t cchOriginalFileNameSize, EItemPreviewType__Enum * pPreviewType));
IL2CPP_REGISTER_METHOD(0x027991C0, uint32_t, GetQueryUGCNumKeyValueTags, (UGCQueryHandle_t handle, uint32_t index));
IL2CPP_REGISTER_METHOD(0x02799200, bool, GetQueryUGCKeyValueTag, (UGCQueryHandle_t handle, uint32_t index, uint32_t keyValueTagIndex, String * * pchKey, uint32_t cchKeySize, String * * pchValue, uint32_t cchValueSize));
IL2CPP_REGISTER_METHOD(0x027993B0, bool, GetQueryUGCKeyValueTag, (UGCQueryHandle_t handle, uint32_t index, String * pchKey, String * * pchValue, uint32_t cchValueSize));
IL2CPP_REGISTER_METHOD(0x02799650, bool, ReleaseQueryUGCRequest, (UGCQueryHandle_t handle));
IL2CPP_REGISTER_METHOD(0x02799680, bool, AddRequiredTag, (UGCQueryHandle_t handle, String * pTagName));
IL2CPP_REGISTER_METHOD(0x027998A0, bool, AddExcludedTag, (UGCQueryHandle_t handle, String * pTagName));
IL2CPP_REGISTER_METHOD(0x02799AC0, bool, SetReturnOnlyIDs, (UGCQueryHandle_t handle, bool bReturnOnlyIDs));
IL2CPP_REGISTER_METHOD(0x02799B00, bool, SetReturnKeyValueTags, (UGCQueryHandle_t handle, bool bReturnKeyValueTags));
IL2CPP_REGISTER_METHOD(0x02799B40, bool, SetReturnLongDescription, (UGCQueryHandle_t handle, bool bReturnLongDescription));
IL2CPP_REGISTER_METHOD(0x02799B80, bool, SetReturnMetadata, (UGCQueryHandle_t handle, bool bReturnMetadata));
IL2CPP_REGISTER_METHOD(0x02799BC0, bool, SetReturnChildren, (UGCQueryHandle_t handle, bool bReturnChildren));
IL2CPP_REGISTER_METHOD(0x02799C00, bool, SetReturnAdditionalPreviews, (UGCQueryHandle_t handle, bool bReturnAdditionalPreviews));
IL2CPP_REGISTER_METHOD(0x02799C40, bool, SetReturnTotalOnly, (UGCQueryHandle_t handle, bool bReturnTotalOnly));
IL2CPP_REGISTER_METHOD(0x02799C80, bool, SetReturnPlaytimeStats, (UGCQueryHandle_t handle, uint32_t unDays));
IL2CPP_REGISTER_METHOD(0x02799CC0, bool, SetLanguage, (UGCQueryHandle_t handle, String * pchLanguage));
IL2CPP_REGISTER_METHOD(0x02799EE0, bool, SetAllowCachedResponse, (UGCQueryHandle_t handle, uint32_t unMaxAgeSeconds));
IL2CPP_REGISTER_METHOD(0x02799F20, bool, SetCloudFileNameFilter, (UGCQueryHandle_t handle, String * pMatchCloudFileName));
IL2CPP_REGISTER_METHOD(0x0279A140, bool, SetMatchAnyTag, (UGCQueryHandle_t handle, bool bMatchAnyTag));
IL2CPP_REGISTER_METHOD(0x0279A180, bool, SetSearchText, (UGCQueryHandle_t handle, String * pSearchText));
IL2CPP_REGISTER_METHOD(0x0279A3A0, bool, SetRankedByTrendDays, (UGCQueryHandle_t handle, uint32_t unDays));
IL2CPP_REGISTER_METHOD(0x0279A3E0, bool, AddRequiredKeyValueTag, (UGCQueryHandle_t handle, String * pKey, String * pValue));
IL2CPP_REGISTER_METHOD(0x0279A720, SteamAPICall_t, RequestUGCDetails, (PublishedFileId_t nPublishedFileID, uint32_t unMaxAgeSeconds));
IL2CPP_REGISTER_METHOD(0x0279A7E0, SteamAPICall_t, CreateItem, (AppId_t nConsumerAppId, EWorkshopFileType__Enum eFileType));
IL2CPP_REGISTER_METHOD(0x0279A8A0, UGCUpdateHandle_t, StartItemUpdate, (AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279A960, bool, SetItemTitle, (UGCUpdateHandle_t handle, String * pchTitle));
IL2CPP_REGISTER_METHOD(0x0279AB80, bool, SetItemDescription, (UGCUpdateHandle_t handle, String * pchDescription));
IL2CPP_REGISTER_METHOD(0x0279ADA0, bool, SetItemUpdateLanguage, (UGCUpdateHandle_t handle, String * pchLanguage));
IL2CPP_REGISTER_METHOD(0x0279AFC0, bool, SetItemMetadata, (UGCUpdateHandle_t handle, String * pchMetaData));
IL2CPP_REGISTER_METHOD(0x0279B1E0, bool, SetItemVisibility, (UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility__Enum eVisibility));
IL2CPP_REGISTER_METHOD(0x0279B220, bool, SetItemTags, (UGCUpdateHandle_t updateHandle, IList_1_System_String_ * pTags));
IL2CPP_REGISTER_METHOD(0x0279B3A0, bool, SetItemContent, (UGCUpdateHandle_t handle, String * pszContentFolder));
IL2CPP_REGISTER_METHOD(0x0279B5C0, bool, SetItemPreview, (UGCUpdateHandle_t handle, String * pszPreviewFile));
IL2CPP_REGISTER_METHOD(0x0279B7E0, bool, SetAllowLegacyUpload, (UGCUpdateHandle_t handle, bool bAllowLegacyUpload));
IL2CPP_REGISTER_METHOD(0x0279B820, bool, RemoveAllItemKeyValueTags, (UGCUpdateHandle_t handle));
IL2CPP_REGISTER_METHOD(0x0279B850, bool, RemoveItemKeyValueTags, (UGCUpdateHandle_t handle, String * pchKey));
IL2CPP_REGISTER_METHOD(0x0279BA70, bool, AddItemKeyValueTag, (UGCUpdateHandle_t handle, String * pchKey, String * pchValue));
IL2CPP_REGISTER_METHOD(0x0279BDB0, bool, AddItemPreviewFile, (UGCUpdateHandle_t handle, String * pszPreviewFile, EItemPreviewType__Enum type));
IL2CPP_REGISTER_METHOD(0x0279BFE0, bool, AddItemPreviewVideo, (UGCUpdateHandle_t handle, String * pszVideoID));
IL2CPP_REGISTER_METHOD(0x0279C200, bool, UpdateItemPreviewFile, (UGCUpdateHandle_t handle, uint32_t index, String * pszPreviewFile));
IL2CPP_REGISTER_METHOD(0x0279C430, bool, UpdateItemPreviewVideo, (UGCUpdateHandle_t handle, uint32_t index, String * pszVideoID));
IL2CPP_REGISTER_METHOD(0x0279C660, bool, RemoveItemPreview, (UGCUpdateHandle_t handle, uint32_t index));
IL2CPP_REGISTER_METHOD(0x0279C6A0, SteamAPICall_t, SubmitItemUpdate, (UGCUpdateHandle_t handle, String * pchChangeNote));
IL2CPP_REGISTER_METHOD(0x0279C8E0, EItemUpdateStatus__Enum, GetItemUpdateProgress, (UGCUpdateHandle_t handle, uint64_t * punBytesProcessed, uint64_t * punBytesTotal));
IL2CPP_REGISTER_METHOD(0x0279C930, SteamAPICall_t, SetUserItemVote, (PublishedFileId_t nPublishedFileID, bool bVoteUp));
IL2CPP_REGISTER_METHOD(0x0279CA00, SteamAPICall_t, GetUserItemVote, (PublishedFileId_t nPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279CAB0, SteamAPICall_t, AddItemToFavorites, (AppId_t nAppId, PublishedFileId_t nPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279CB70, SteamAPICall_t, RemoveItemFromFavorites, (AppId_t nAppId, PublishedFileId_t nPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279CC30, SteamAPICall_t, SubscribeItem, (PublishedFileId_t nPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279CCE0, SteamAPICall_t, UnsubscribeItem, (PublishedFileId_t nPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279CD90, uint32_t, GetNumSubscribedItems, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0279CDB0, uint32_t, GetSubscribedItems, (PublishedFileId_t__Array * pvecPublishedFileID, uint32_t cMaxEntries));
IL2CPP_REGISTER_METHOD(0x0279CDF0, uint32_t, GetItemState, (PublishedFileId_t nPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279CE20, bool, GetItemInstallInfo, (PublishedFileId_t nPublishedFileID, uint64_t * punSizeOnDisk, String * * pchFolder, uint32_t cchFolderSize, uint32_t * punTimeStamp));
IL2CPP_REGISTER_METHOD(0x0279CF60, bool, GetItemDownloadInfo, (PublishedFileId_t nPublishedFileID, uint64_t * punBytesDownloaded, uint64_t * punBytesTotal));
IL2CPP_REGISTER_METHOD(0x0279CFB0, bool, DownloadItem, (PublishedFileId_t nPublishedFileID, bool bHighPriority));
IL2CPP_REGISTER_METHOD(0x0279CFF0, bool, BInitWorkshopForGameServer, (DepotId_t unWorkshopDepotID, String * pszFolder));
IL2CPP_REGISTER_METHOD(0x0279D210, void, SuspendDownloads, (bool bSuspend));
IL2CPP_REGISTER_METHOD(0x0279D240, SteamAPICall_t, StartPlaytimeTracking, (PublishedFileId_t__Array * pvecPublishedFileID, uint32_t unNumPublishedFileIDs));
IL2CPP_REGISTER_METHOD(0x0279D310, SteamAPICall_t, StopPlaytimeTracking, (PublishedFileId_t__Array * pvecPublishedFileID, uint32_t unNumPublishedFileIDs));
IL2CPP_REGISTER_METHOD(0x0279D3E0, SteamAPICall_t, StopPlaytimeTrackingForAllItems, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0279D490, SteamAPICall_t, AddDependency, (PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279D550, SteamAPICall_t, RemoveDependency, (PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279D610, SteamAPICall_t, AddAppDependency, (PublishedFileId_t nPublishedFileID, AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x0279D6D0, SteamAPICall_t, RemoveAppDependency, (PublishedFileId_t nPublishedFileID, AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x0279D790, SteamAPICall_t, GetAppDependencies, (PublishedFileId_t nPublishedFileID));
IL2CPP_REGISTER_METHOD(0x0279D840, SteamAPICall_t, DeleteItem, (PublishedFileId_t nPublishedFileID));
}
