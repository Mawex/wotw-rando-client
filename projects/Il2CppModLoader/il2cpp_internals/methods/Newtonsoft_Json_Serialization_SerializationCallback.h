#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Serialization::SerializationCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::SerializationCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01BFBCE0, void, Invoke, (app::SerializationCallback * this_ptr, app::Object * o, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01BFC360, IAsyncResult *, BeginInvoke, (app::SerializationCallback * this_ptr, app::Object * o, app::StreamingContext context, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SerializationCallback * this_ptr, app::IAsyncResult * result));
}
