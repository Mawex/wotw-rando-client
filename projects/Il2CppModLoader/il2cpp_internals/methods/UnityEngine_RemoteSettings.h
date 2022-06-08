using namespace app;

namespace app::methods::UnityEngine::RemoteSettings {
IL2CPP_REGISTER_METHOD(0x031C2120, void, RemoteSettingsUpdated, (bool wasLastUpdatedFromServer));
IL2CPP_REGISTER_METHOD(0x031C21B0, void, RemoteSettingsBeforeFetchFromServer, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031C2240, void, RemoteSettingsUpdateCompleted, (bool wasLastUpdatedFromServer, bool settingsChanged, int32_t response));
}
