using namespace app;

namespace app::methods::Steamworks::UserAchievementStoredCallback {
IL2CPP_REGISTER_METHOD(0x027A6CC0, int32_t, get_CallbackCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A6DC0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A7030, void, RegisterCallback, (Action_1_Steamworks_UserAchievementStored_t_ * action));
IL2CPP_REGISTER_METHOD(0x027A7230, void, UnregisterCallback, (Action_1_Steamworks_UserAchievementStored_t_ * action));
IL2CPP_REGISTER_METHODINFO(0x0471C420, UserAchievementStoredCallback_UnregisterCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A7440, void, RegisterCallResult, (Action_2_Steamworks_UserAchievementStored_t_Boolean_ * action, SteamAPICall_t hApiCall));
IL2CPP_REGISTER_METHOD(0x027A7550, void, UnregisterCallResult, (SteamAPICall_t hApiCall));
IL2CPP_REGISTER_METHOD(0x027A7660, void, BuildCallbackData, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04785230, UserAchievementStoredCallback_BuildCallbackData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A7A60, void, OnRunCallback, (void * thisptr, void * pvParam));
IL2CPP_REGISTER_METHODINFO(0x04776178, UserAchievementStoredCallback_OnRunCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A7C00, void, OnRunCallResult, (void * thisptr, void * pvParam, bool bFailed, uint64_t hSteamAPICall));
IL2CPP_REGISTER_METHODINFO(0x04797308, UserAchievementStoredCallback_OnRunCallResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A7E70, int32_t, OnGetCallbackSizeBytes, (void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x04742330, UserAchievementStoredCallback_OnGetCallbackSizeBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A7F10, void, __cctor, (MethodInfo * method));
}
