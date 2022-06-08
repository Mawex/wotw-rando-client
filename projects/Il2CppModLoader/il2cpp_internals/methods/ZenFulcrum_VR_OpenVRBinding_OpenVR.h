using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::OpenVR {
IL2CPP_REGISTER_METHOD(0x00F55520, uint32_t, InitInternal, (EVRInitError__Enum * peError, EVRApplicationType__Enum eApplicationType));
IL2CPP_REGISTER_METHOD(0x00F555D0, void, ShutdownInternal, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F55660, bool, IsHmdPresent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F556F0, bool, IsRuntimeInstalled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F55780, String *, GetStringForHmdError, (EVRInitError__Enum error));
IL2CPP_REGISTER_METHOD(0x00F558D0, void *, GetGenericInterface, (String * pchInterfaceVersion, EVRInitError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x00F558E0, bool, IsInterfaceVersionValid, (String * pchInterfaceVersion));
IL2CPP_REGISTER_METHOD(0x00F55A60, uint32_t, GetInitToken, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F55AF0, uint32_t, get_VRToken, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F55B90, void, set_VRToken, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x00F55C40, OpenVR_COpenVRContext *, get_OpenVRInternal_ModuleContext, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F55E50, CVRSystem *, get_System, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F55F00, CVRChaperone *, get_Chaperone, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F55FB0, CVRChaperoneSetup *, get_ChaperoneSetup, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F56060, CVRCompositor *, get_Compositor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F56110, CVROverlay *, get_Overlay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F561C0, CVRRenderModels *, get_RenderModels, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F56270, CVRExtendedDisplay *, get_ExtendedDisplay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F56320, CVRSettings *, get_Settings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F563D0, CVRApplications *, get_Applications, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F56480, CVRScreenshots *, get_Screenshots, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F56530, CVRTrackedCamera *, get_TrackedCamera, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F565E0, CVRSystem *, Init, (EVRInitError__Enum * peError, EVRApplicationType__Enum eApplicationType));
IL2CPP_REGISTER_METHOD(0x00F56A20, void, Shutdown, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (OpenVR * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
