#include <interception_macros.h>

namespace app::methods::System::ComponentModel::AsyncCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AsyncCompletedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (AsyncCompletedEventHandler * __this, Object * sender, AsyncCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (AsyncCompletedEventHandler * __this, Object * sender, AsyncCompletedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AsyncCompletedEventHandler * __this, IAsyncResult * result));
}
