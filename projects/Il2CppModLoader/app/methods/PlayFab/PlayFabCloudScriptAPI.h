#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::PlayFabCloudScriptAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A255B0, void, ForgetAllCredentials, ())
    IL2CPP_REGISTER_METHOD(0x01A25640, void, ExecuteEntityCloudScript, (app::ExecuteEntityCloudScriptRequest * request, app::Action_1_PlayFab_CloudScriptModels_ExecuteCloudScriptResult_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers))
}
