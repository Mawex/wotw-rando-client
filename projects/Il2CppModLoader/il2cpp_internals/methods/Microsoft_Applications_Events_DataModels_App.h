#include <interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::App {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_expId, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_expId, (App * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_userId, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_userId, (App * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_env, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_env, (App * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_asId, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_asId, (App * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_id, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_id, (App * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_ver, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ver, (App * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_locale, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_locale, (App * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_name, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_name, (App * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBA10, void, __ctor, (App * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (App * __this, String * fullName, String * name));
}
