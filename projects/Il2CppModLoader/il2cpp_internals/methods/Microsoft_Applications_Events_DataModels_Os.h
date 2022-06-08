#include <interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::Os {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_locale, (Os * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_locale, (Os * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_expId, (Os * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_expId, (Os * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_bootId, (Os * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_bootId, (Os * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_name, (Os * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_name, (Os * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_ver, (Os * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ver, (Os * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FD1F0, void, __ctor, (Os * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Os * __this, String * fullName, String * name));
}
