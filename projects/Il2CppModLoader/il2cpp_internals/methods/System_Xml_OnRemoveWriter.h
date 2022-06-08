#include <interception_macros.h>

namespace app::methods::System::Xml::OnRemoveWriter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (OnRemoveWriter * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (OnRemoveWriter * __this, XmlRawWriter * writer));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (OnRemoveWriter * __this, XmlRawWriter * writer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (OnRemoveWriter * __this, IAsyncResult * result));
}
