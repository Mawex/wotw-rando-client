#include <interception_macros.h>

namespace app::methods::PlayFab::OneDSEventsAPI {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsOneDSAuthenticated, (OneDSEventsAPI * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsOneDSAuthenticated, (OneDSEventsAPI * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01853F00, void, SetCredentials, (OneDSEventsAPI * __this, String * projectIdIkey, String * ingestionKey, String * jwtToken, String * headerJwtTicketKey, String * headerJwtTicketPrefix));
IL2CPP_REGISTER_METHOD(0x01853F30, void, ForgetAllCredentials, (OneDSEventsAPI * __this));
IL2CPP_REGISTER_METHOD(0x01854010, Task_1_PlayFab_SharedModels_PlayFabResult_1_ *, WriteTelemetryEventsAsync, (OneDSEventsAPI * __this, WriteEventsRequest * request, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01854150, Task_1_PlayFab_SharedModels_PlayFabResult_1__1 *, GetTelemetryIngestionConfigAsync, (TelemetryIngestionConfigRequest * request, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01854270, Task *, WaitWhile, (Func_1_Boolean_ * condition, int32_t frequency, int32_t timeout));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (OneDSEventsAPI * __this));
}
