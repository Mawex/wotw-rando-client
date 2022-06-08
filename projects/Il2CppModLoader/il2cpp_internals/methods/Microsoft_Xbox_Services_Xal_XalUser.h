#include <interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalUser {
IL2CPP_REGISTER_METHOD(0x0143F300, uint64_t, get_Id, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x0143F440, bool, get_UserIsGuest, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x0143F4E0, XalUserState__Enum, get_UserState, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x0143F620, String *, get_Gamertag, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x0143F880, XalAgeGroup__Enum, get_AgeGroup, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x0143F9C0, void, add_UserChanged, (XalUser_1 * __this, EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0143FAB0, void, remove_UserChanged, (XalUser_1 * __this, EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0143FBA0, void, __ctor, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x0143FC40, void, __ctor, (XalUser_1 * __this, void * asyncQueue, void * userHandle));
IL2CPP_REGISTER_METHOD(0x0143FE90, void, Dispose, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x01440060, bool, SignOutIsPresent, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x014400F0, Task *, SignOutAsync, (XalUser_1 * __this));
IL2CPP_REGISTER_METHOD(0x014405C0, XalPrivilegeCheckResult, CheckPrivilege, (XalUser_1 * __this, XalPrivilege__Enum privilege));
IL2CPP_REGISTER_METHOD(0x01440740, void, GetTokenAndSignatureSilentlyAsync, (XalUser_1 * __this, XalUserGetTokenAndSignatureArgs args, Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * onComplete, Action_1_Int32_ * onError));
IL2CPP_REGISTER_METHOD(0x01440AB0, Task *, ResolveIssueWithUiAsync, (XalUser_1 * __this, String * url));
IL2CPP_REGISTER_METHOD(0x01441210, Task_1_System_Byte_ *, GetGamerPictureAsync, (XalUser_1 * __this, XalGamerPictureSize__Enum pictureSize));
IL2CPP_REGISTER_METHOD(0x014416E0, void, OnUserChanged, (void * context, XalUser_InternalXalUserLocalId userId, XalUserChangeType__Enum change));
IL2CPP_REGISTER_METHODINFO(0x04783428, XalUser_1_OnUserChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01440060, bool, XalWrapper_XalSignOutUserAsyncIsPresent, ());
IL2CPP_REGISTER_METHOD(0x01441950, int32_t, XalWrapper_XalSignOutUserAsync, (void * async, void * user));
IL2CPP_REGISTER_METHOD(0x01441A00, int32_t, XalWrapper_XalSignOutUserResult, (void * async));
IL2CPP_REGISTER_METHOD(0x01441AA0, int32_t, XalWrapper_XalUserGetId, (void * user, uint64_t * id));
IL2CPP_REGISTER_METHOD(0x01441B50, bool, XalWrapper_XalUserIsGuest, (void * user));
IL2CPP_REGISTER_METHOD(0x01441BF0, int32_t, XalWrapper_XalUserGetState, (void * user, XalUserState__Enum * state));
IL2CPP_REGISTER_METHOD(0x01441CA0, void *, XalWrapper_XalUserGetGamertagSize, (void * user));
IL2CPP_REGISTER_METHOD(0x01441D40, int32_t, XalWrapper_XalUserGetGamertag, (void * user, void * gamertagSize, StringBuilder * gamertag, void * * gamertagSizeUsed));
IL2CPP_REGISTER_METHOD(0x01441F50, int32_t, XalWrapper_XalUserGetGamerPictureAsync, (void * async, void * user, XalGamerPictureSize__Enum pictureSize));
IL2CPP_REGISTER_METHOD(0x01442000, int32_t, XalWrapper_XalUserGetGamerPictureResultSize, (void * async, void * * bufferSize));
IL2CPP_REGISTER_METHOD(0x014420B0, int32_t, XalWrapper_XalUserGetGamerPictureResult, (void * async, void * bufferSize, void * buffer));
IL2CPP_REGISTER_METHOD(0x01442160, int32_t, XalWrapper_XalUserGetAgeGroup, (void * user, XalAgeGroup__Enum * ageGroup));
IL2CPP_REGISTER_METHOD(0x01442210, int32_t, XalWrapper_XalUserCheckPrivilege, (void * user, XalPrivilege__Enum privilege, bool * hasPrivilege, XalPrivilegeCheckDenyReasons__Enum * reasons));
IL2CPP_REGISTER_METHOD(0x014422F0, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyAsync, (void * async, void * user, XalUser_InternalXalUserGetTokenAndSignatureArgs * args, uint32_t headerCount, XalHttpHeader__Array * headers, void * bodyCount, Byte__Array * body));
IL2CPP_REGISTER_METHOD(0x014425E0, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyResultSize, (void * async, void * * bufferSize));
IL2CPP_REGISTER_METHOD(0x01442690, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyResult, (void * async, void * bufferSize, void * buffer, void * * result, void * * bufferUsed));
IL2CPP_REGISTER_METHOD(0x01442760, int32_t, XalWrapper_XalUserResolveIssueWithUiAsync, (void * async, void * user, String * url));
IL2CPP_REGISTER_METHOD(0x01442900, int32_t, XalWrapper_XalUserResolveIssueWithUiResult, (void * async));
IL2CPP_REGISTER_METHOD(0x014429A0, int32_t, XalWrapper_XalUserRegisterChangeEventHandler, (void * queue, void * context, XalUser_XalUserChangeEventHandler * handler, uint64_t * token));
IL2CPP_REGISTER_METHOD(0x01442A70, void, XalWrapper_XalUserUnregisterChangeEventHandler, (uint64_t token));
}
