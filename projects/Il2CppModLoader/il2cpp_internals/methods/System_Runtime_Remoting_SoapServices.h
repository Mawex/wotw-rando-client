#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::SoapServices {
IL2CPP_REGISTER_METHOD(0x01D851D0, String *, get_XmlNsForClrTypeWithAssembly, ());
IL2CPP_REGISTER_METHOD(0x01D85250, String *, get_XmlNsForClrTypeWithNs, ());
IL2CPP_REGISTER_METHOD(0x01D852D0, String *, get_XmlNsForClrTypeWithNsAndAssembly, ());
IL2CPP_REGISTER_METHOD(0x01D85350, String *, CodeXmlNamespaceForClrTypeNamespace, (String * typeNamespace, String * assemblyName));
IL2CPP_REGISTER_METHOD(0x01D85630, String *, GetNameKey, (String * name, String * namspace));
IL2CPP_REGISTER_METHOD(0x01D856E0, String *, GetAssemblyName, (MethodBase * mb));
IL2CPP_REGISTER_METHOD(0x01D858C0, bool, GetXmlElementForInteropType, (Type * type, String * * xmlElement, String * * xmlNamespace));
IL2CPP_REGISTER_METHOD(0x01D859D0, String *, GetXmlNamespaceForMethodCall, (MethodBase * mb));
IL2CPP_REGISTER_METHOD(0x01D85AC0, String *, GetXmlNamespaceForMethodResponse, (MethodBase * mb));
IL2CPP_REGISTER_METHOD(0x01D85BB0, bool, GetXmlTypeForInteropType, (Type * type, String * * xmlType, String * * xmlTypeNamespace));
IL2CPP_REGISTER_METHOD(0x01D85CC0, void, PreLoad, (Assembly * assembly));
IL2CPP_REGISTER_METHOD(0x01D85DC0, void, PreLoad, (Type * type));
IL2CPP_REGISTER_METHOD(0x01D866A0, void, RegisterInteropXmlElement, (String * xmlElement, String * xmlNamespace, Type * type));
IL2CPP_REGISTER_METHOD(0x01D868C0, void, RegisterInteropXmlType, (String * xmlType, String * xmlTypeNamespace, Type * type));
IL2CPP_REGISTER_METHOD(0x01D86AE0, String *, EncodeNs, (String * ns));
IL2CPP_REGISTER_METHOD(0x01D86BC0, void, __cctor, ());
}
