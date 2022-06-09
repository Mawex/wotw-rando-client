#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlSerializationWriteCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XmlSerializationWriteCallback * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::XmlSerializationWriteCallback * this_ptr, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::XmlSerializationWriteCallback * this_ptr, app::Object * o, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XmlSerializationWriteCallback * this_ptr, app::IAsyncResult * result));
}
