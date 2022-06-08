using namespace app;

namespace app::methods::Enemy3D {
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_FaceLeft, (Enemy3D * __this));
IL2CPP_REGISTER_METHOD(0x00BFF1B0, void, set_FaceLeft, (Enemy3D * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00BFF220, void, FacePlayer, (Enemy3D * __this));
IL2CPP_REGISTER_METHOD(0x00BFF260, bool, get_IsFacingPlayer, (Enemy3D * __this));
IL2CPP_REGISTER_METHOD(0x00443680, void, __ctor, (Enemy3D * __this));
}
