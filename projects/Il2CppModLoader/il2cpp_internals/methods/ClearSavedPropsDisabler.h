using namespace app;

namespace app::methods::ClearSavedPropsDisabler {
IL2CPP_REGISTER_METHOD(0x012ACB70, void, OnEnable, (ClearSavedPropsDisabler * __this));
IL2CPP_REGISTER_METHOD(0x012ACCF0, void, OnDisable, (ClearSavedPropsDisabler * __this));
IL2CPP_REGISTER_METHOD(0x012ACD50, bool, ShouldExecuteBasedOnCommandlineArgument, (String * argument, bool defaultValue));
IL2CPP_REGISTER_METHOD(0x012ACE30, String *, ParseArgument, (String * flag));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ClearSavedPropsDisabler * __this));
}
