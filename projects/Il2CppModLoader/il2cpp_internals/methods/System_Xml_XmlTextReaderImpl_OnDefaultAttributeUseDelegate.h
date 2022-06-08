#include <interception_macros.h>

namespace app::methods::System::Xml::XmlTextReaderImpl_OnDefaultAttributeUseDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XmlTextReaderImpl_OnDefaultAttributeUseDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (XmlTextReaderImpl_OnDefaultAttributeUseDelegate * __this, IDtdDefaultAttributeInfo * defaultAttribute, XmlTextReaderImpl * coreReader));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (XmlTextReaderImpl_OnDefaultAttributeUseDelegate * __this, IDtdDefaultAttributeInfo * defaultAttribute, XmlTextReaderImpl * coreReader, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XmlTextReaderImpl_OnDefaultAttributeUseDelegate * __this, IAsyncResult * result));
}
