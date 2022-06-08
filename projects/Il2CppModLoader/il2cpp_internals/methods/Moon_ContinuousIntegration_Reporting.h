using namespace app;

namespace app::methods::Moon::ContinuousIntegration::Reporting {
IL2CPP_REGISTER_METHOD(0x0318CE10, String *, EscapeStringForTC, (String * input));
IL2CPP_REGISTER_METHOD(0x0318CF70, bool, get_IsCIBuild, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0318D110, void, SetStatus, (String * status, String * appendText));
IL2CPP_REGISTER_METHOD(0x0318D5D0, void, Error, (String * errorText));
IL2CPP_REGISTER_METHOD(0x0318D710, void, Warning, (String * warningText));
IL2CPP_REGISTER_METHOD(0x0318D7C0, void, Info, (String * infoText));
IL2CPP_REGISTER_METHOD(0x0318D8D0, void, Warning, (String * warningText, String * stackTrace));
IL2CPP_REGISTER_METHOD(0x0318DC30, void, OpenBlock, (String * blockName, String * blockDescription));
IL2CPP_REGISTER_METHOD(0x0318DF20, void, CloseBlock, (String * blockName));
IL2CPP_REGISTER_METHOD(0x0318E040, void, Measurement, (String * statistic, String * value));
IL2CPP_REGISTER_METHOD(0x0318E2D0, void, StartProgress, (String * taskName));
IL2CPP_REGISTER_METHOD(0x0318E3E0, void, StopProgress, (String * taskName));
IL2CPP_REGISTER_METHOD(0x0318E4F0, void, Progress, (String * task, int32_t stepCount, int32_t maxStepCount));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
