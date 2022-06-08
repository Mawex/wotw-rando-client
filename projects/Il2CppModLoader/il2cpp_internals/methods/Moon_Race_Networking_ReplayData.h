using namespace app;

namespace app::methods::Moon::Race::Networking::ReplayData {
IL2CPP_REGISTER_METHOD(0x00C454E0, void, __ctor, (ReplayData * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Filename, (ReplayData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Filename, (ReplayData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Data, (ReplayData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Data, (ReplayData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsReady, (ReplayData * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsReady, (ReplayData * __this, bool value));
}
