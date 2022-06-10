#pragma once
#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabEventsAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A29CB0, void, ForgetAllCredentials, ())
    IL2CPP_REGISTER_METHOD(0x01A29D40, void, WriteEvents, (app::WriteEventsRequest * request, app::Action_1_PlayFab_EventsModels_WriteEventsResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A29E50, void, WriteTelemetryEvents, (app::WriteEventsRequest * request, app::Action_1_PlayFab_EventsModels_WriteEventsResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
}
