#include <interception_macros.h>

namespace app::methods::System::Net::FtpDataStream_WriteDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (FtpDataStream_WriteDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D2E820, void, Invoke, (FtpDataStream_WriteDelegate * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01D2ED60, IAsyncResult *, BeginInvoke, (FtpDataStream_WriteDelegate * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (FtpDataStream_WriteDelegate * __this, IAsyncResult * result));
}
