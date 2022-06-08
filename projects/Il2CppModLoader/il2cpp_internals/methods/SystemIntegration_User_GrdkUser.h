#include <interception_macros.h>

namespace app::methods::SystemIntegration::User::GrdkUser {
IL2CPP_REGISTER_METHOD(0x002FA280, Texture2D *, get_Image, (GrdkUser * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Image, (GrdkUser * __this, Texture2D * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_GamerTag, (GrdkUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_GamerTag, (GrdkUser * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Uid, (GrdkUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Uid, (GrdkUser * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00CDB160, String *, get_SignInPrefix, (GrdkUser * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GrdkUser * __this));
}
