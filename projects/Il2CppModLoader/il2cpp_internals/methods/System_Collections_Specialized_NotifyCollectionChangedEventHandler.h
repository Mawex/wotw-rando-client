#include <interception_macros.h>

namespace app::methods::System::Collections::Specialized::NotifyCollectionChangedEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (NotifyCollectionChangedEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (NotifyCollectionChangedEventHandler * __this, Object * sender, NotifyCollectionChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (NotifyCollectionChangedEventHandler * __this, Object * sender, NotifyCollectionChangedEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (NotifyCollectionChangedEventHandler * __this, IAsyncResult * result));
}
