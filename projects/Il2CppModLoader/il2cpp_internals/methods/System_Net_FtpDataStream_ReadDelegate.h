#include <interception_macros.h>

namespace app::methods::System::Net::FtpDataStream_ReadDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (FtpDataStream_ReadDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D2E1F0, int32_t, Invoke, (FtpDataStream_ReadDelegate * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01D2E740, IAsyncResult *, BeginInvoke, (FtpDataStream_ReadDelegate * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (FtpDataStream_ReadDelegate * __this, IAsyncResult * result));
}
