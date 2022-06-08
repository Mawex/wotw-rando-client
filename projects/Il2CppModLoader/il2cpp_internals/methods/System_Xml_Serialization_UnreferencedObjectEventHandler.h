#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::UnreferencedObjectEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnreferencedObjectEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (UnreferencedObjectEventHandler * __this, Object * sender, UnreferencedObjectEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (UnreferencedObjectEventHandler * __this, Object * sender, UnreferencedObjectEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UnreferencedObjectEventHandler * __this, IAsyncResult * result));
}
