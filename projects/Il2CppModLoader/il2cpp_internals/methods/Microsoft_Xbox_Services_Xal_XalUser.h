#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::XalUser {
IL2CPP_REGISTER_METHOD(0x0143F300, uint64_t, get_Id, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0143F440, bool, get_UserIsGuest, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0143F4E0, XalUserState__Enum, get_UserState, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0143F620, String *, get_Gamertag, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0143F880, XalAgeGroup__Enum, get_AgeGroup, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0143F9C0, void, add_UserChanged, (app::XalUser_1 * this_ptr, app::EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0143FAB0, void, remove_UserChanged, (app::XalUser_1 * this_ptr, app::EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0143FBA0, void, __ctor_1, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0143FC40, void, __ctor_2, (app::XalUser_1 * this_ptr, app::void * async_queue, app::void * user_handle));
IL2CPP_REGISTER_METHOD(0x0143FE90, void, Dispose, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01440060, bool, SignOutIsPresent, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x014400F0, Task *, SignOutAsync, (app::XalUser_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x014405C0, XalPrivilegeCheckResult, CheckPrivilege, (app::XalUser_1 * this_ptr, app::XalPrivilege__Enum privilege));
IL2CPP_REGISTER_METHOD(0x01440740, void, GetTokenAndSignatureSilentlyAsync, (app::XalUser_1 * this_ptr, app::XalUserGetTokenAndSignatureArgs args, app::Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * on_complete, app::Action_1_Int32_ * on_error));
IL2CPP_REGISTER_METHOD(0x01440AB0, Task *, ResolveIssueWithUiAsync, (app::XalUser_1 * this_ptr, app::String * url));
IL2CPP_REGISTER_METHOD(0x01441210, Task_1_System_Byte_ *, GetGamerPictureAsync, (app::XalUser_1 * this_ptr, app::XalGamerPictureSize__Enum picture_size));
IL2CPP_REGISTER_METHOD(0x014416E0, void, OnUserChanged, (app::void * context, app::XalUser_InternalXalUserLocalId user_id, app::XalUserChangeType__Enum change));
IL2CPP_REGISTER_METHODINFO(0x04783428, XalUser_1_OnUserChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01440060, bool, XalWrapper_XalSignOutUserAsyncIsPresent, ());
IL2CPP_REGISTER_METHOD(0x01441950, int32_t, XalWrapper_XalSignOutUserAsync, (app::void * async, app::void * user));
IL2CPP_REGISTER_METHOD(0x01441A00, int32_t, XalWrapper_XalSignOutUserResult, (app::void * async));
IL2CPP_REGISTER_METHOD(0x01441AA0, int32_t, XalWrapper_XalUserGetId, (app::void * user, app::uint64_t * id));
IL2CPP_REGISTER_METHOD(0x01441B50, bool, XalWrapper_XalUserIsGuest, (app::void * user));
IL2CPP_REGISTER_METHOD(0x01441BF0, int32_t, XalWrapper_XalUserGetState, (app::void * user, app::XalUserState__Enum * state));
IL2CPP_REGISTER_METHOD(0x01441CA0, void *, XalWrapper_XalUserGetGamertagSize, (app::void * user));
IL2CPP_REGISTER_METHOD(0x01441D40, int32_t, XalWrapper_XalUserGetGamertag, (app::void * user, app::void * gamertag_size, app::StringBuilder * gamertag, app::void * * gamertag_size_used));
IL2CPP_REGISTER_METHOD(0x01441F50, int32_t, XalWrapper_XalUserGetGamerPictureAsync, (app::void * async, app::void * user, app::XalGamerPictureSize__Enum picture_size));
IL2CPP_REGISTER_METHOD(0x01442000, int32_t, XalWrapper_XalUserGetGamerPictureResultSize, (app::void * async, app::void * * buffer_size));
IL2CPP_REGISTER_METHOD(0x014420B0, int32_t, XalWrapper_XalUserGetGamerPictureResult, (app::void * async, app::void * buffer_size, app::void * buffer));
IL2CPP_REGISTER_METHOD(0x01442160, int32_t, XalWrapper_XalUserGetAgeGroup, (app::void * user, app::XalAgeGroup__Enum * age_group));
IL2CPP_REGISTER_METHOD(0x01442210, int32_t, XalWrapper_XalUserCheckPrivilege, (app::void * user, app::XalPrivilege__Enum privilege, app::bool * has_privilege, app::XalPrivilegeCheckDenyReasons__Enum * reasons));
IL2CPP_REGISTER_METHOD(0x014422F0, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyAsync, (app::void * async, app::void * user, app::XalUser_InternalXalUserGetTokenAndSignatureArgs * args, uint32_t header_count, app::XalHttpHeader__Array * headers, app::void * body_count, app::Byte__Array * body));
IL2CPP_REGISTER_METHOD(0x014425E0, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyResultSize, (app::void * async, app::void * * buffer_size));
IL2CPP_REGISTER_METHOD(0x01442690, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyResult, (app::void * async, app::void * buffer_size, app::void * buffer, app::void * * result, app::void * * buffer_used));
IL2CPP_REGISTER_METHOD(0x01442760, int32_t, XalWrapper_XalUserResolveIssueWithUiAsync, (app::void * async, app::void * user, app::String * url));
IL2CPP_REGISTER_METHOD(0x01442900, int32_t, XalWrapper_XalUserResolveIssueWithUiResult, (app::void * async));
IL2CPP_REGISTER_METHOD(0x014429A0, int32_t, XalWrapper_XalUserRegisterChangeEventHandler, (app::void * queue, app::void * context, app::XalUser_XalUserChangeEventHandler * handler, app::uint64_t * token));
IL2CPP_REGISTER_METHOD(0x01442A70, void, XalWrapper_XalUserUnregisterChangeEventHandler, (uint64_t token));
}
