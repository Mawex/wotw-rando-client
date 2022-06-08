#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabEventsAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01A29CB0, void, ForgetAllCredentials, ());
IL2CPP_REGISTER_METHOD(0x01A29D40, void, WriteEvents, (WriteEventsRequest * request, Action_1_PlayFab_EventsModels_WriteEventsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A29E50, void, WriteTelemetryEvents, (WriteEventsRequest * request, Action_1_PlayFab_EventsModels_WriteEventsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
