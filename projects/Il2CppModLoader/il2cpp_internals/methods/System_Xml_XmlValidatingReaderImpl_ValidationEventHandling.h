using namespace app;

namespace app::methods::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XmlValidatingReaderImpl_ValidationEventHandling * __this, XmlValidatingReaderImpl * reader));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, IValidationEventHandling_get_EventHandler, (XmlValidatingReaderImpl_ValidationEventHandling * __this));
IL2CPP_REGISTER_METHOD(0x01FCB1B0, void, IValidationEventHandling_SendEvent, (XmlValidatingReaderImpl_ValidationEventHandling * __this, Exception * exception, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHODINFO(0x0477FD40, XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FCB3C0, void, AddHandler, (XmlValidatingReaderImpl_ValidationEventHandling * __this, ValidationEventHandler * handler));
}
