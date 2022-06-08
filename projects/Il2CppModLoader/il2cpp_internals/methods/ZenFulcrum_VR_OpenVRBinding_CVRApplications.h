using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRApplications {
IL2CPP_REGISTER_METHOD(0x01676A30, void, __ctor, (CVRApplications * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x01676BD0, EVRApplicationError__Enum, AddApplicationManifest, (CVRApplications * __this, String * pchApplicationManifestFullPath, bool bTemporary));
IL2CPP_REGISTER_METHOD(0x01676BF0, EVRApplicationError__Enum, RemoveApplicationManifest, (CVRApplications * __this, String * pchApplicationManifestFullPath));
IL2CPP_REGISTER_METHOD(0x01676C10, bool, IsApplicationInstalled, (CVRApplications * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x01676C30, uint32_t, GetApplicationCount, (CVRApplications * __this));
IL2CPP_REGISTER_METHOD(0x01676C50, EVRApplicationError__Enum, GetApplicationKeyByIndex, (CVRApplications * __this, uint32_t unApplicationIndex, StringBuilder * pchAppKeyBuffer, uint32_t unAppKeyBufferLen));
IL2CPP_REGISTER_METHOD(0x01676C80, EVRApplicationError__Enum, GetApplicationKeyByProcessId, (CVRApplications * __this, uint32_t unProcessId, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen));
IL2CPP_REGISTER_METHOD(0x01676CB0, EVRApplicationError__Enum, LaunchApplication, (CVRApplications * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x01676CD0, EVRApplicationError__Enum, LaunchTemplateApplication, (CVRApplications * __this, String * pchTemplateAppKey, String * pchNewAppKey, AppOverrideKeys_t__Array * pKeys));
IL2CPP_REGISTER_METHOD(0x01676D10, EVRApplicationError__Enum, LaunchApplicationFromMimeType, (CVRApplications * __this, String * pchMimeType, String * pchArgs));
IL2CPP_REGISTER_METHOD(0x01676D30, EVRApplicationError__Enum, LaunchDashboardOverlay, (CVRApplications * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x01676D50, bool, CancelApplicationLaunch, (CVRApplications * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x01676D70, EVRApplicationError__Enum, IdentifyApplication, (CVRApplications * __this, uint32_t unProcessId, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x01676D90, uint32_t, GetApplicationProcessId, (CVRApplications * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x01676DB0, String *, GetApplicationsErrorNameFromEnum, (CVRApplications * __this, EVRApplicationError__Enum error));
IL2CPP_REGISTER_METHOD(0x01676E90, uint32_t, GetApplicationPropertyString, (CVRApplications * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, StringBuilder * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x01676EC0, bool, GetApplicationPropertyBool, (CVRApplications * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, EVRApplicationError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x01676EF0, uint64_t, GetApplicationPropertyUint64, (CVRApplications * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, EVRApplicationError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x01676F20, EVRApplicationError__Enum, SetApplicationAutoLaunch, (CVRApplications * __this, String * pchAppKey, bool bAutoLaunch));
IL2CPP_REGISTER_METHOD(0x01676F50, bool, GetApplicationAutoLaunch, (CVRApplications * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x01676F80, EVRApplicationError__Enum, SetDefaultApplicationForMimeType, (CVRApplications * __this, String * pchAppKey, String * pchMimeType));
IL2CPP_REGISTER_METHOD(0x01676FB0, bool, GetDefaultApplicationForMimeType, (CVRApplications * __this, String * pchMimeType, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen));
IL2CPP_REGISTER_METHOD(0x01676FE0, bool, GetApplicationSupportedMimeTypes, (CVRApplications * __this, String * pchAppKey, String * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer));
IL2CPP_REGISTER_METHOD(0x01677010, uint32_t, GetApplicationsThatSupportMimeType, (CVRApplications * __this, String * pchMimeType, String * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer));
IL2CPP_REGISTER_METHOD(0x01677040, uint32_t, GetApplicationLaunchArguments, (CVRApplications * __this, uint32_t unHandle, String * pchArgs, uint32_t unArgs));
IL2CPP_REGISTER_METHOD(0x01677070, EVRApplicationError__Enum, GetStartingApplication, (CVRApplications * __this, String * pchAppKeyBuffer, uint32_t unAppKeyBufferLen));
IL2CPP_REGISTER_METHOD(0x016770A0, EVRApplicationTransitionState__Enum, GetTransitionState, (CVRApplications * __this));
IL2CPP_REGISTER_METHOD(0x016770D0, EVRApplicationError__Enum, PerformApplicationPrelaunchCheck, (CVRApplications * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x01677100, String *, GetApplicationsTransitionStateNameFromEnum, (CVRApplications * __this, EVRApplicationTransitionState__Enum state));
IL2CPP_REGISTER_METHOD(0x016771F0, bool, IsQuitUserPromptRequested, (CVRApplications * __this));
IL2CPP_REGISTER_METHOD(0x01677220, EVRApplicationError__Enum, LaunchInternalProcess, (CVRApplications * __this, String * pchBinaryPath, String * pchArguments, String * pchWorkingDirectory));
IL2CPP_REGISTER_METHOD(0x01677250, uint32_t, GetCurrentSceneProcessId, (CVRApplications * __this));
}
