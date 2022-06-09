#include <interception_macros.h>

namespace app::methods::System_Net::IPHostEntry {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_HostName, (app::IPHostEntry * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_HostName, (app::IPHostEntry * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String__Array *, get_Aliases, (app::IPHostEntry * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Aliases, (app::IPHostEntry * this_ptr, app::String__Array * value));
IL2CPP_REGISTER_METHOD(0x002FB950, IPAddress__Array *, get_AddressList, (app::IPHostEntry * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_AddressList, (app::IPHostEntry * this_ptr, app::IPAddress__Array * value));
IL2CPP_REGISTER_METHOD(0x00953E60, void, __ctor, (app::IPHostEntry * this_ptr));
}
