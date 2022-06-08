using namespace app;

namespace app::methods::SystemIntegration::SignIn::User::XboxUser {
IL2CPP_REGISTER_METHOD(0x002FA280, Texture2D *, get_Image, (XboxUser * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Image, (XboxUser * __this, Texture2D * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_GamerTag, (XboxUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_GamerTag, (XboxUser * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Uid, (XboxUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Uid, (XboxUser * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Id, (XboxUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_Id, (XboxUser * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A090, String *, get_SignInPrefix, (XboxUser * __this));
IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_IsProfileComplete, (XboxUser * __this));
IL2CPP_REGISTER_METHOD(0x0052A120, void, set_IsProfileComplete, (XboxUser * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxUser * __this));
}
