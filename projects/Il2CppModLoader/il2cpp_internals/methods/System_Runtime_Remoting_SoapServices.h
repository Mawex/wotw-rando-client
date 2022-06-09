#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::SoapServices {
IL2CPP_REGISTER_METHOD(0x01D851D0, String *, get_XmlNsForClrTypeWithAssembly, ());
IL2CPP_REGISTER_METHOD(0x01D85250, String *, get_XmlNsForClrTypeWithNs, ());
IL2CPP_REGISTER_METHOD(0x01D852D0, String *, get_XmlNsForClrTypeWithNsAndAssembly, ());
IL2CPP_REGISTER_METHOD(0x01D85350, String *, CodeXmlNamespaceForClrTypeNamespace, (app::String * type_namespace, app::String * assembly_name));
IL2CPP_REGISTER_METHOD(0x01D85630, String *, GetNameKey, (app::String * name, app::String * namspace));
IL2CPP_REGISTER_METHOD(0x01D856E0, String *, GetAssemblyName, (app::MethodBase * mb));
IL2CPP_REGISTER_METHOD(0x01D858C0, bool, GetXmlElementForInteropType, (app::Type * type, app::String * * xml_element, app::String * * xml_namespace));
IL2CPP_REGISTER_METHOD(0x01D859D0, String *, GetXmlNamespaceForMethodCall, (app::MethodBase * mb));
IL2CPP_REGISTER_METHOD(0x01D85AC0, String *, GetXmlNamespaceForMethodResponse, (app::MethodBase * mb));
IL2CPP_REGISTER_METHOD(0x01D85BB0, bool, GetXmlTypeForInteropType, (app::Type * type, app::String * * xml_type, app::String * * xml_type_namespace));
IL2CPP_REGISTER_METHOD(0x01D85CC0, void, PreLoad_1, (app::Assembly * assembly));
IL2CPP_REGISTER_METHOD(0x01D85DC0, void, PreLoad_2, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01D866A0, void, RegisterInteropXmlElement, (app::String * xml_element, app::String * xml_namespace, app::Type * type));
IL2CPP_REGISTER_METHOD(0x01D868C0, void, RegisterInteropXmlType, (app::String * xml_type, app::String * xml_type_namespace, app::Type * type));
IL2CPP_REGISTER_METHOD(0x01D86AE0, String *, EncodeNs, (app::String * ns));
IL2CPP_REGISTER_METHOD(0x01D86BC0, void, __cctor, ());
}
