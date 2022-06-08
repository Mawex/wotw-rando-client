#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::DeserializationEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DeserializationEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (DeserializationEventHandler * __this, Object * sender));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (DeserializationEventHandler * __this, Object * sender, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DeserializationEventHandler * __this, IAsyncResult * result));
}
