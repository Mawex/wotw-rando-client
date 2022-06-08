#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::DeflateStream_AsyncWriteDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DeflateStream_AsyncWriteDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B74C40, void, Invoke, (DeflateStream_AsyncWriteDelegate * __this, Byte__Array * array, int32_t offset, int32_t count, bool isAsync));
IL2CPP_REGISTER_METHOD(0x02B75230, IAsyncResult *, BeginInvoke, (DeflateStream_AsyncWriteDelegate * __this, Byte__Array * array, int32_t offset, int32_t count, bool isAsync, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DeflateStream_AsyncWriteDelegate * __this, IAsyncResult * result));
}
