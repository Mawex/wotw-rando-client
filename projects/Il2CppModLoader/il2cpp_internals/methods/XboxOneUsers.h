using namespace app;

namespace app::methods::XboxOneUsers {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CurrentUserControllerMatch, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5BAC0, Action_1_Int32_ *, get_OnUserWillChange, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5BB40, void, set_OnUserWillChange, (Action_1_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x01C5BBD0, Action *, get_OnUserChanged, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5BC50, void, set_OnUserChanged, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5BCE0, Action *, get_OnUserPicked, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5BD60, void, set_OnUserPicked, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5BDF0, Action *, get_OnUserSignedOut, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5BE70, void, set_OnUserSignedOut, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5BF00, Action *, get_OnLoginCancel, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5BF80, void, set_OnLoginCancel, (Action * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanViewProfiles, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_CurrentUserHandle, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasCurrentUser, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_CurrentUserID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_CurrentUserLocalID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, Texture2D *, get_CurrentUserPicture, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AutoSwitchUsers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_AutoSwitchUsers, (bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ResolvingUser, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ClearUserCachedData, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5C010, bool, RequireUser, (Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestUser, (Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SignOutCurrentUser, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5C0A0, bool, UpdateUserPicture, (Action * success));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShowProfileCard, (String * userID));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectCurrentInto, (XboxUser * xboxUser));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetCurrentUserId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxOneUsers * __this));
}
