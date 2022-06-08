using namespace app;

namespace app::methods::Challenge {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (Challenge * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (Challenge * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Description, (Challenge * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Description, (Challenge * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Started, (Challenge * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Started, (Challenge * __this, bool value));
IL2CPP_REGISTER_METHOD(0x010415E0, void, __ctor, (Challenge * __this, String * name, String * description, bool started));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, ToString, (Challenge * __this));
}
