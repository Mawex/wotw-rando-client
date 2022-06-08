#include <interception_macros.h>

namespace app::methods::System::Timers::ElapsedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ElapsedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (ElapsedEventHandler * __this, Object * sender, ElapsedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (ElapsedEventHandler * __this, Object * sender, ElapsedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ElapsedEventHandler * __this, IAsyncResult * result));
}
