#include <interception_macros.h>

namespace app::methods::Steamworks::UserStatsReceivedCallback {
IL2CPP_REGISTER_METHOD(0x027A8220, int32_t, get_CallbackCount, ());
IL2CPP_REGISTER_METHOD(0x027A8320, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x027A8590, void, RegisterCallback, (Action_1_Steamworks_UserStatsReceived_t_ * action));
IL2CPP_REGISTER_METHOD(0x027A8770, void, UnregisterCallback, (Action_1_Steamworks_UserStatsReceived_t_ * action));
IL2CPP_REGISTER_METHODINFO(0x0471BB50, UserStatsReceivedCallback_UnregisterCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A8980, void, RegisterCallResult, (Action_2_Steamworks_UserStatsReceived_t_Boolean_ * action, SteamAPICall_t hApiCall));
IL2CPP_REGISTER_METHOD(0x027A8A90, void, UnregisterCallResult, (SteamAPICall_t hApiCall));
IL2CPP_REGISTER_METHOD(0x027A8BA0, void, BuildCallbackData, ());
IL2CPP_REGISTER_METHODINFO(0x04706768, UserStatsReceivedCallback_BuildCallbackData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A8FA0, void, OnRunCallback, (void * thisptr, void * pvParam));
IL2CPP_REGISTER_METHODINFO(0x0477BFC0, UserStatsReceivedCallback_OnRunCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A9140, void, OnRunCallResult, (void * thisptr, void * pvParam, bool bFailed, uint64_t hSteamAPICall));
IL2CPP_REGISTER_METHODINFO(0x0470B270, UserStatsReceivedCallback_OnRunCallResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A93B0, int32_t, OnGetCallbackSizeBytes, (void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x0472CA58, UserStatsReceivedCallback_OnGetCallbackSizeBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027A9450, void, __cctor, ());
}
