#include <interception_macros.h>

namespace app::methods::System_Net::HeaderParser {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::HeaderParser * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, String__Array *, Invoke, (app::HeaderParser * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::HeaderParser * this_ptr, app::String * value, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, String__Array *, EndInvoke, (app::HeaderParser * this_ptr, app::IAsyncResult * result));
}
