using namespace app;

namespace app::methods::System::Net::UploadProgressChangedEventArgs {
IL2CPP_REGISTER_METHOD(0x020ACF70, void, __ctor, (UploadProgressChangedEventArgs * __this, int32_t progressPercentage, Object * userToken, int64_t bytesSent, int64_t totalBytesToSend, int64_t bytesReceived, int64_t totalBytesToReceive));
IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_BytesReceived, (UploadProgressChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_TotalBytesToReceive, (UploadProgressChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_BytesSent, (UploadProgressChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, int64_t, get_TotalBytesToSend, (UploadProgressChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x020ACFC0, void, __ctor, (UploadProgressChangedEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x04761460, UploadProgressChangedEventArgs__ctor_1__MethodInfo);
}
