#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlSerializationFixupCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XmlSerializationFixupCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (XmlSerializationFixupCallback * __this, Object * fixup));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (XmlSerializationFixupCallback * __this, Object * fixup, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XmlSerializationFixupCallback * __this, IAsyncResult * result));
}
