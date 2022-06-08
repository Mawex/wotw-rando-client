#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlAttributeEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XmlAttributeEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (XmlAttributeEventHandler * __this, Object * sender, XmlAttributeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (XmlAttributeEventHandler * __this, Object * sender, XmlAttributeEventArgs * e, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XmlAttributeEventHandler * __this, IAsyncResult * result));
}
