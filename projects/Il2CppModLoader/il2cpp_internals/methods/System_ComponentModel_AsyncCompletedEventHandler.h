#include <interception_macros.h>

namespace app::methods::System_ComponentModel::AsyncCompletedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AsyncCompletedEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::AsyncCompletedEventHandler * this_ptr, app::Object * sender, app::AsyncCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::AsyncCompletedEventHandler * this_ptr, app::Object * sender, app::AsyncCompletedEventArgs * e, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AsyncCompletedEventHandler * this_ptr, app::IAsyncResult * result));
}
