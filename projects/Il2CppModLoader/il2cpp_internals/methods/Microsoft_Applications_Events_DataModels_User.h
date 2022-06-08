#include <interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::User {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_id, (User * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_id, (User * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_localId, (User * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_localId, (User * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_authId, (User * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_authId, (User * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_locale, (User * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_locale, (User * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FD420, void, __ctor, (User * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (User * __this, String * fullName, String * name));
}
