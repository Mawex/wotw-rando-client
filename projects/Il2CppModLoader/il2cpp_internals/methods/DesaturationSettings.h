using namespace app;

namespace app::methods::DesaturationSettings {
IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_DebugOverrideAmount, (DesaturationSettings * __this));
IL2CPP_REGISTER_METHOD(0x00B83F40, void, set_DebugOverrideAmount, (DesaturationSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B83F50, float, get_EffectiveAmount, (DesaturationSettings * __this));
IL2CPP_REGISTER_METHOD(0x00B84000, DesaturationSettings *, Clone, (DesaturationSettings * __this));
IL2CPP_REGISTER_METHOD(0x008C1C80, void, CopyFrom, (DesaturationSettings * __this, DesaturationSettings * settingsDesaturation));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DesaturationSettings * __this));
}
