#include <interception_macros.h>

namespace app::methods::System::IO::FileStream_WriteDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (FileStream_WriteDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D2E820, void, Invoke, (FileStream_WriteDelegate * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0236EFC0, IAsyncResult *, BeginInvoke, (FileStream_WriteDelegate * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (FileStream_WriteDelegate * __this, IAsyncResult * result));
}
