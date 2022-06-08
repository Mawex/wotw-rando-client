using namespace app;

namespace app::methods::PlayFab::Internal::PlayFabDeviceUtil {
IL2CPP_REGISTER_METHOD(0x01838A00, void, DoAttributeInstall, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01838DC0, void, OnAttributeInstall, (AttributeInstallResult * result));
IL2CPP_REGISTER_METHODINFO(0x04723088, PlayFabDeviceUtil_OnAttributeInstall__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01838E80, void, SendDeviceInfoToPlayFab, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x018393F0, void, OnGatherFail, (PlayFabError * error));
IL2CPP_REGISTER_METHODINFO(0x04743E88, PlayFabDeviceUtil_OnGatherFail__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018394C0, void, OnPlayFabLogin, (PlayFabResultCommon * result));
IL2CPP_REGISTER_METHOD(0x01839810, void, _OnPlayFabLogin, (UserSettings * settingsForUser, String * playFabId, String * entityId, String * entityType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GetAdvertIdFromUnity, (MethodInfo * method));
}
