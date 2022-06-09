#include <interception_macros.h>

namespace app::methods::System_Net::CompletionDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::CompletionDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01434270, void, Invoke, (app::CompletionDelegate * this_ptr, app::Byte__Array * response_bytes, app::Exception * exception, app::Object * state));
IL2CPP_REGISTER_METHOD(0x00DC7DB0, IAsyncResult *, BeginInvoke, (app::CompletionDelegate * this_ptr, app::Byte__Array * response_bytes, app::Exception * exception, app::Object * state, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CompletionDelegate * this_ptr, app::IAsyncResult * result));
}
