using namespace app;

namespace app::methods::System::Net::DownloadProgressChangedEventArgs {
IL2CPP_REGISTER_METHOD(0x01EB4050, void, __ctor, (DownloadProgressChangedEventArgs * __this, int32_t progressPercentage, Object * userToken, int64_t bytesReceived, int64_t totalBytesToReceive));
IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_BytesReceived, (DownloadProgressChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_TotalBytesToReceive, (DownloadProgressChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x01EB4080, void, __ctor, (DownloadProgressChangedEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x0473AB38, DownloadProgressChangedEventArgs__ctor_1__MethodInfo);
}
