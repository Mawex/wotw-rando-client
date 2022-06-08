#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::SerializationEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SerializationEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (SerializationEventHandler * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01EDCAA0, IAsyncResult *, BeginInvoke, (SerializationEventHandler * __this, StreamingContext context, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SerializationEventHandler * __this, IAsyncResult * result));
}
