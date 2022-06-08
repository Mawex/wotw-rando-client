using namespace app;

namespace app::methods::LegacyContactSwitch {
IL2CPP_REGISTER_METHOD(0x00A170C0, Renderer *, get_Renderer, (LegacyContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00A17190, void, Awake, (LegacyContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00A17370, void, FixedUpdate, (LegacyContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00A17510, void, OnTriggerActivated, (LegacyContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00A17510, void, ToggleSwitch, (LegacyContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00A17560, void, TurnOn, (LegacyContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00A17650, void, TurnOff, (LegacyContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00A17790, bool, get_IsOn, (LegacyContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00A177A0, void, Serialize, (LegacyContactSwitch * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A17900, void, __ctor, (LegacyContactSwitch * __this));
}
