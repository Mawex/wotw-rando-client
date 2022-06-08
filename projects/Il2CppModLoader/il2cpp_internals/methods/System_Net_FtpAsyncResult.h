#include <interception_macros.h>

namespace app::methods::System::Net::FtpAsyncResult {
IL2CPP_REGISTER_METHOD(0x01D2C460, void, __ctor, (FtpAsyncResult * __this, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Object *, get_AsyncState, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01D2C5C0, WaitHandle *, get_AsyncWaitHandle, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_CompletedSynchronously, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01D2C7F0, bool, get_IsCompleted, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00519280, bool, get_GotException, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Exception *, get_Exception, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, FtpWebResponse *, get_Response, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Response, (FtpAsyncResult * __this, FtpWebResponse * value));
IL2CPP_REGISTER_METHOD(0x002FB990, Stream *, get_Stream, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Stream, (FtpAsyncResult * __this, Stream * value));
IL2CPP_REGISTER_METHOD(0x01D2C8E0, void, WaitUntilComplete, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01D2C930, bool, WaitUntilComplete, (FtpAsyncResult * __this, int32_t timeout, bool exitContext));
IL2CPP_REGISTER_METHOD(0x01D2C9B0, void, SetCompleted, (FtpAsyncResult * __this, bool synch, Exception * exc, FtpWebResponse * response));
IL2CPP_REGISTER_METHOD(0x01D2CAB0, void, SetCompleted, (FtpAsyncResult * __this, bool synch, FtpWebResponse * response));
IL2CPP_REGISTER_METHOD(0x01D2CAD0, void, SetCompleted, (FtpAsyncResult * __this, bool synch, Exception * exc));
IL2CPP_REGISTER_METHOD(0x01D2CAF0, void, DoCallback, (FtpAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01D2CBA0, void, Reset, (FtpAsyncResult * __this));
}
