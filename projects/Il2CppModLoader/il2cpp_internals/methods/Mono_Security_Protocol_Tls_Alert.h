using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::Alert {
IL2CPP_REGISTER_METHOD(0x0052B590, AlertLevel__Enum, get_Level, (Alert * __this));
IL2CPP_REGISTER_METHOD(0x00504D80, AlertDescription__Enum_1, get_Description, (Alert * __this));
IL2CPP_REGISTER_METHOD(0x02A4DC40, String *, get_Message, (Alert * __this));
IL2CPP_REGISTER_METHOD(0x02A4DC50, bool, get_IsWarning, (Alert * __this));
IL2CPP_REGISTER_METHOD(0x02A4DC60, bool, get_IsCloseNotify, (Alert * __this));
IL2CPP_REGISTER_METHOD(0x02A4DC80, void, __ctor, (Alert * __this, AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x023BA2B0, void, __ctor, (Alert * __this, AlertLevel__Enum level, AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x02A4DD00, AlertLevel__Enum, inferAlertLevel, (AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x02A4DD70, String *, GetAlertMessage, (AlertDescription__Enum_1 description));
}
