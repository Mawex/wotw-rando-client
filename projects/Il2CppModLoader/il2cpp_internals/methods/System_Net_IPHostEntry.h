using namespace app;

namespace app::methods::System::Net::IPHostEntry {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_HostName, (IPHostEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_HostName, (IPHostEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String__Array *, get_Aliases, (IPHostEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Aliases, (IPHostEntry * __this, String__Array * value));
IL2CPP_REGISTER_METHOD(0x002FB950, IPAddress__Array *, get_AddressList, (IPHostEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_AddressList, (IPHostEntry * __this, IPAddress__Array * value));
IL2CPP_REGISTER_METHOD(0x00953E60, void, __ctor, (IPHostEntry * __this));
}
