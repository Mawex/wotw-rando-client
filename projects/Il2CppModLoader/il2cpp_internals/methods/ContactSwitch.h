using namespace app;

namespace app::methods::ContactSwitch {
IL2CPP_REGISTER_METHOD(0x011E6910, bool, get_IsActivated, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E69F0, void, set_IsActivated, (ContactSwitch * __this, bool value));
IL2CPP_REGISTER_METHOD(0x011E6AE0, Renderer *, get_Renderer, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E6BB0, void, OnTriggerEnable, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E6C50, void, OnTriggerDisable, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E6CF0, void, FixedUpdate, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E6EA0, void, OnTriggerActivated, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E6EA0, void, ToggleSwitch, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E6F10, void, TurnOn, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E7000, void, TurnOff, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E7150, bool, get_IsOn, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E7160, void, OnRestoreCheckpoint, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E7190, void, Apply, (ContactSwitch * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E7310, IUberState__Array *, get_AffectingUberStates, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E7400, List_1_UnityEngine_GameObject_ *, get_AllTargets, (ContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x011E75C0, void, __ctor, (ContactSwitch * __this));
}
