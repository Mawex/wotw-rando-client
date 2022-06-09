#include <interception_macros.h>

namespace app::methods::Microsoft_Applications_Events_DataModels::User {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_id, (app::User * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_id, (app::User * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_localId, (app::User * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_localId, (app::User * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_authId, (app::User * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_authId, (app::User * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_locale, (app::User * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_locale, (app::User * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FD420, void, __ctor_1, (app::User * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_2, (app::User * this_ptr, app::String * full_name, app::String * name));
}
