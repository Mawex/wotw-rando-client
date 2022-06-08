using namespace app;

namespace app::methods::System::IO::FileStream_ReadDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (FileStream_ReadDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D2E1F0, int32_t, Invoke, (FileStream_ReadDelegate * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x0236EEE0, IAsyncResult *, BeginInvoke, (FileStream_ReadDelegate * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (FileStream_ReadDelegate * __this, IAsyncResult * result));
}
