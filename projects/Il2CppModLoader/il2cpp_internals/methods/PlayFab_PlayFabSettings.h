using namespace app;

namespace app::methods::PlayFab::PlayFabSettings {
IL2CPP_REGISTER_METHOD(0x01A455C0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A457D0, PlayFabSharedSettings *, get_PlayFabSharedPrivate, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A45910, PlayFabSharedSettings *, GetSharedSettingsObjectPrivate, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0471A420, PlayFabSettings_GetSharedSettingsObjectPrivate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A45B00, void, set_DeveloperSecretKey, (String * value));
IL2CPP_REGISTER_METHOD(0x01A45BB0, String *, get_DeveloperSecretKey, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A45C50, String *, get_DeviceUniqueIdentifier, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A45CA0, String *, get_ProductionEnvironmentUrlPrivate, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A45D90, void, set_ProductionEnvironmentUrlPrivate, (String * value));
IL2CPP_REGISTER_METHOD(0x01A45E40, String *, get_TitleId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A45EE0, void, set_TitleId, (String * value));
IL2CPP_REGISTER_METHOD(0x01A45F90, String *, get_VerticalName, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46030, void, set_VerticalName, (String * value));
IL2CPP_REGISTER_METHOD(0x01A460E0, PlayFabLogLevel__Enum, get_LogLevel, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46180, void, set_LogLevel, (PlayFabLogLevel__Enum value));
IL2CPP_REGISTER_METHOD(0x01A46230, WebRequestType__Enum, get_RequestType, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A462D0, void, set_RequestType, (WebRequestType__Enum value));
IL2CPP_REGISTER_METHOD(0x01A46380, int32_t, get_RequestTimeout, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46420, void, set_RequestTimeout, (int32_t value));
IL2CPP_REGISTER_METHOD(0x01A464D0, bool, get_RequestKeepAlive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46570, void, set_RequestKeepAlive, (bool value));
IL2CPP_REGISTER_METHOD(0x01A46620, bool, get_CompressApiData, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A466C0, void, set_CompressApiData, (bool value));
IL2CPP_REGISTER_METHOD(0x01A46770, String *, get_LoggerHost, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46810, void, set_LoggerHost, (String * value));
IL2CPP_REGISTER_METHOD(0x01A468C0, int32_t, get_LoggerPort, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46960, void, set_LoggerPort, (int32_t value));
IL2CPP_REGISTER_METHOD(0x01A46A10, bool, get_EnableRealTimeLogging, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46AB0, void, set_EnableRealTimeLogging, (bool value));
IL2CPP_REGISTER_METHOD(0x01A46B60, int32_t, get_LogCapLimit, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46C00, void, set_LogCapLimit, (int32_t value));
IL2CPP_REGISTER_METHOD(0x01A46CB0, String *, get_LocalApiServer, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A46D90, void, set_LocalApiServer, (String * value));
IL2CPP_REGISTER_METHOD(0x01A46E40, String *, GetFullUrl, (String * apiCall, Dictionary_2_System_String_System_String_ * getParams, PlayFabApiSettings * apiSettings));
}
