#include <interception_macros.h>

namespace app::methods::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DeflateStreamNative_UnmanagedReadOrWrite * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02009B10, int32_t, Invoke, (DeflateStreamNative_UnmanagedReadOrWrite * __this, void * buffer, int32_t length, void * data));
IL2CPP_REGISTER_METHOD(0x02009EB0, IAsyncResult *, BeginInvoke, (DeflateStreamNative_UnmanagedReadOrWrite * __this, void * buffer, int32_t length, void * data, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (DeflateStreamNative_UnmanagedReadOrWrite * __this, IAsyncResult * result));
}
