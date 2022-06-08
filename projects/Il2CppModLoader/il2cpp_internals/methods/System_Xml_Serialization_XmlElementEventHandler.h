#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlElementEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XmlElementEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (XmlElementEventHandler * __this, Object * sender, XmlElementEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (XmlElementEventHandler * __this, Object * sender, XmlElementEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XmlElementEventHandler * __this, IAsyncResult * result));
}
