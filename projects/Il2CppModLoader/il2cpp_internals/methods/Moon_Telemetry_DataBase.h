#include <interception_macros.h>

namespace app::methods::Moon_Telemetry::DataBase {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_PlayerKey, (app::DataBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_SessionKey, (app::DataBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Time, (app::DataBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (app::DataBase * this_ptr, app::String * player_key, app::String * session_key, app::String * time));
}
