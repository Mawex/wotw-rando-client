using namespace app;

namespace app::methods::Newtonsoft::Json::Serialization::SerializationCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SerializationCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01BFBCE0, void, Invoke, (SerializationCallback * __this, Object * o, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01BFC360, IAsyncResult *, BeginInvoke, (SerializationCallback * __this, Object * o, StreamingContext context, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SerializationCallback * __this, IAsyncResult * result));
}
