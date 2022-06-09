#include <interception_macros.h>

namespace app::methods::System_Runtime_Serialization::DeserializationEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DeserializationEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::DeserializationEventHandler * this_ptr, app::Object * sender));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::DeserializationEventHandler * this_ptr, app::Object * sender, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DeserializationEventHandler * this_ptr, app::IAsyncResult * result));
}
