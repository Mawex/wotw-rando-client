using namespace app;

namespace app::methods::PlayFab::Public::PlayFabLogger {
IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginUploadLog, (PlayFabLogger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UploadLog, (PlayFabLogger * __this, String * message));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndUploadLog, (PlayFabLogger * __this));
IL2CPP_REGISTER_METHOD(0x01AD1210, void, __ctor, (PlayFabLogger * __this));
}
