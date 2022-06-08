using namespace app;

namespace app::methods::System::IO::Compression::DeflateStream_ReadMethod {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DeflateStream_ReadMethod * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D2E1F0, int32_t, Invoke, (DeflateStream_ReadMethod * __this, Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x020082F0, IAsyncResult *, BeginInvoke, (DeflateStream_ReadMethod * __this, Byte__Array * array, int32_t offset, int32_t count, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (DeflateStream_ReadMethod * __this, IAsyncResult * result));
}
