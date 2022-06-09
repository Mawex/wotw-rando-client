#include <interception_macros.h>

namespace app::methods::Moon_Race_Networking::ReplayData {
IL2CPP_REGISTER_METHOD(0x00C454E0, void, __ctor, (app::ReplayData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Filename, (app::ReplayData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Filename, (app::ReplayData * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Data, (app::ReplayData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Data, (app::ReplayData * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsReady, (app::ReplayData * this_ptr));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsReady, (app::ReplayData * this_ptr, bool value));
}
