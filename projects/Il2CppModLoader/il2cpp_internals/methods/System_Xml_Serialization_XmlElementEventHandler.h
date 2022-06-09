#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlElementEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XmlElementEventHandler * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::XmlElementEventHandler * this_ptr, app::Object * sender, app::XmlElementEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::XmlElementEventHandler * this_ptr, app::Object * sender, app::XmlElementEventArgs * e, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XmlElementEventHandler * this_ptr, app::IAsyncResult * result));
}
