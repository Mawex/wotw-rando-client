using namespace app;

namespace app::methods::System::IO::Compression::DeflateStream_WriteMethod {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DeflateStream_WriteMethod * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D2E820, void, Invoke, (DeflateStream_WriteMethod * __this, Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x020083D0, IAsyncResult *, BeginInvoke, (DeflateStream_WriteMethod * __this, Byte__Array * array, int32_t offset, int32_t count, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DeflateStream_WriteMethod * __this, IAsyncResult * result));
}
