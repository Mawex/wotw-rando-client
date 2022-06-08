#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::SerializationErrorCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SerializationErrorCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01BFC440, void, Invoke, (SerializationErrorCallback * __this, Object * o, StreamingContext context, ErrorContext * errorContext));
IL2CPP_REGISTER_METHOD(0x01BFCB40, IAsyncResult *, BeginInvoke, (SerializationErrorCallback * __this, Object * o, StreamingContext context, ErrorContext * errorContext, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SerializationErrorCallback * __this, IAsyncResult * result));
}
