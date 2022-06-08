#include <interception_macros.h>

namespace app::methods::System::Data::MergeFailedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (MergeFailedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (MergeFailedEventHandler * __this, Object * sender, MergeFailedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (MergeFailedEventHandler * __this, Object * sender, MergeFailedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (MergeFailedEventHandler * __this, IAsyncResult * result));
}
