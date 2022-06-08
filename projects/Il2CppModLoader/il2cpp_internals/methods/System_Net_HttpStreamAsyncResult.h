using namespace app;

namespace app::methods::System::Net::HttpStreamAsyncResult {
IL2CPP_REGISTER_METHOD(0x01E59310, void, Complete, (HttpStreamAsyncResult * __this, Exception * e));
IL2CPP_REGISTER_METHOD(0x01E59320, void, Complete, (HttpStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Object *, get_AsyncState, (HttpStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E59430, WaitHandle *, get_AsyncWaitHandle, (HttpStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E59680, bool, get_CompletedSynchronously, (HttpStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E59690, bool, get_IsCompleted, (HttpStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E59780, void, __ctor, (HttpStreamAsyncResult * __this));
}
