using namespace app;

namespace app::methods::Moon::Wwise::WwiseIntegration {
IL2CPP_REGISTER_METHOD(0x02716110, void, Initialize, (WwiseIntegration * __this, AkWwiseInitializationSettings * config, WwiseBootstrapConfiguration * bootstrapConfig));
IL2CPP_REGISTER_METHODINFO(0x0471D690, WwiseIntegration_Initialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, LogTime, (WwiseIntegration * __this));
IL2CPP_REGISTER_METHOD(0x027164E0, bool, get_IsInitialized, (WwiseIntegration * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (WwiseIntegration * __this));
IL2CPP_REGISTER_METHOD(0x02716570, void, Dispose, (WwiseIntegration * __this));
IL2CPP_REGISTER_METHOD(0x02716600, bool, ValidateResult, (WwiseIntegration * __this, AKRESULT__Enum result, String * verb));
IL2CPP_REGISTER_METHOD(0x02716730, void, Pause, (WwiseIntegration * __this));
IL2CPP_REGISTER_METHOD(0x02716750, void, Resume, (WwiseIntegration * __this));
IL2CPP_REGISTER_METHOD(0x02716770, void, LateUpdate, (WwiseIntegration * __this));
IL2CPP_REGISTER_METHOD(0x027168A0, void, ActivateAudio, (WwiseIntegration * __this, bool activate));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WwiseIntegration * __this));
}
