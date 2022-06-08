using namespace app;

namespace app::methods::AkXBoxOneSettings {
IL2CPP_REGISTER_METHOD(0x027084F0, void, __ctor, (AkXBoxOneSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, AkCommonUserSettings *, GetUserSettings, (AkXBoxOneSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, AkCommonAdvancedSettings *, GetAdvancedSettings, (AkXBoxOneSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, AkCommonCommSettings *, GetCommsSettings, (AkXBoxOneSettings * __this));
}
