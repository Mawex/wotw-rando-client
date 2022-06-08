#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::DataBase {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_PlayerKey, (DataBase * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_SessionKey, (DataBase * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Time, (DataBase * __this));
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (DataBase * __this, String * playerKey, String * sessionKey, String * time));
}
