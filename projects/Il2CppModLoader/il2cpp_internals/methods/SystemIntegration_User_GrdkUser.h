#include <interception_macros.h>

namespace app::methods::SystemIntegration_User::GrdkUser {
IL2CPP_REGISTER_METHOD(0x002FA280, Texture2D *, get_Image, (app::GrdkUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Image, (app::GrdkUser * this_ptr, app::Texture2D * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_GamerTag, (app::GrdkUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_GamerTag, (app::GrdkUser * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Uid, (app::GrdkUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Uid, (app::GrdkUser * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x00CDB160, String *, get_SignInPrefix, (app::GrdkUser * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::GrdkUser * this_ptr));
}
