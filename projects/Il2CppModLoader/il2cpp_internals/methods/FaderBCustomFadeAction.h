using namespace app;

namespace app::methods::FaderBCustomFadeAction {
IL2CPP_REGISTER_METHOD(0x00993A70, float, get_Duration, (FaderBCustomFadeAction * __this));
IL2CPP_REGISTER_METHOD(0x00993A80, void, set_Duration, (FaderBCustomFadeAction * __this, float value));
IL2CPP_REGISTER_METHODINFO(0x047213B0, FaderBCustomFadeAction_set_Duration__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00993AE0, void, Perform, (FaderBCustomFadeAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00993BC0, void, Stop, (FaderBCustomFadeAction * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F1D0, FaderBCustomFadeAction_Stop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00993C10, bool, get_IsPerforming, (FaderBCustomFadeAction * __this));
IL2CPP_REGISTER_METHODINFO(0x047730B0, FaderBCustomFadeAction_get_IsPerforming__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00993C60, void, __ctor, (FaderBCustomFadeAction * __this));
}
