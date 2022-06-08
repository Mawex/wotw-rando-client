#include <interception_macros.h>

namespace app::methods::Ionic::Zlib::DeflateManager_CompressFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DeflateManager_CompressFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B33400, BlockState__Enum, Invoke, (DeflateManager_CompressFunc * __this, FlushType__Enum flush));
IL2CPP_REGISTER_METHOD(0x0306C060, IAsyncResult *, BeginInvoke, (DeflateManager_CompressFunc * __this, FlushType__Enum flush, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, BlockState__Enum, EndInvoke, (DeflateManager_CompressFunc * __this, IAsyncResult * result));
}
