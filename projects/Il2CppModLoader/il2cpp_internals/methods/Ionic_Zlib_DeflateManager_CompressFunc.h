#include <interception_macros.h>

namespace app::methods::Ionic_Zlib::DeflateManager_CompressFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DeflateManager_CompressFunc * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02B33400, BlockState__Enum, Invoke, (app::DeflateManager_CompressFunc * this_ptr, app::FlushType__Enum flush));
IL2CPP_REGISTER_METHOD(0x0306C060, IAsyncResult *, BeginInvoke, (app::DeflateManager_CompressFunc * this_ptr, app::FlushType__Enum flush, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, BlockState__Enum, EndInvoke, (app::DeflateManager_CompressFunc * this_ptr, app::IAsyncResult * result));
}
