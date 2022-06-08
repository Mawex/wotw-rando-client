#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabCloudScriptAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01A255B0, void, ForgetAllCredentials, ());
IL2CPP_REGISTER_METHOD(0x01A25640, void, ExecuteEntityCloudScript, (ExecuteEntityCloudScriptRequest * request, Action_1_PlayFab_CloudScriptModels_ExecuteCloudScriptResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
