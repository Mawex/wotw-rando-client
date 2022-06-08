using namespace app;

namespace app::methods::Steamworks::UserStatsStoredCallback {
IL2CPP_REGISTER_METHOD(0x027A9760, int32_t, get_CallbackCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A9860, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x027A9AD0, void, RegisterCallback, (Action_1_Steamworks_UserStatsStored_t_ * action));
IL2CPP_REGISTER_METHOD(0x027A9CD0, void, UnregisterCallback, (Action_1_Steamworks_UserStatsStored_t_ * action));
IL2CPP_REGISTER_METHODINFO(0x04751D00, UserStatsStoredCallback_UnregisterCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A9EE0, void, RegisterCallResult, (Action_2_Steamworks_UserStatsStored_t_Boolean_ * action, SteamAPICall_t hApiCall));
IL2CPP_REGISTER_METHOD(0x027A9FF0, void, UnregisterCallResult, (SteamAPICall_t hApiCall));
IL2CPP_REGISTER_METHOD(0x027AA100, void, BuildCallbackData, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x047624D0, UserStatsStoredCallback_BuildCallbackData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027AA500, void, OnRunCallback, (void * thisptr, void * pvParam));
IL2CPP_REGISTER_METHODINFO(0x04732808, UserStatsStoredCallback_OnRunCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027AA690, void, OnRunCallResult, (void * thisptr, void * pvParam, bool bFailed, uint64_t hSteamAPICall));
IL2CPP_REGISTER_METHODINFO(0x04734FE8, UserStatsStoredCallback_OnRunCallResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027AA8F0, int32_t, OnGetCallbackSizeBytes, (void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x047134B8, UserStatsStoredCallback_OnGetCallbackSizeBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027AA990, void, __cctor, (MethodInfo * method));
}
