using namespace app;

namespace app::methods::Microsoft::Xbox::Services::Xal::InitArgs {
IL2CPP_REGISTER_METHOD(0x002FC6D0, uint32_t, get_TitleId, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_TitleId, (InitArgs * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_ClientId, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ClientId, (InitArgs * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Sandbox, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Sandbox, (InitArgs * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_RedirectUri, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_RedirectUri, (InitArgs * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String__Array *, get_ThirdPartyConsents, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ThirdPartyConsents, (InitArgs * __this, String__Array * value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_UseRemoteConnect, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_UseRemoteConnect, (InitArgs * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_DisableDiagnosticTelemetry, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x004379D0, void, set_DisableDiagnosticTelemetry, (InitArgs * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, uint32_t, get_Flags, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, set_Flags, (InitArgs * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_CorrelationVector, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_CorrelationVector, (InitArgs * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, DeviceInfo *, get_DeviceInfo, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, TelemetryInfo *, get_TelemetryInfo, (InitArgs * __this));
IL2CPP_REGISTER_METHOD(0x01434070, void, __ctor, (InitArgs * __this));
}
