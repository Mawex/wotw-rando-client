using namespace app;

namespace app::methods::System::Xml::Linq::XDocumentType {
IL2CPP_REGISTER_METHOD(0x03036150, void, __ctor, (XDocumentType * __this, String * name, String * publicId, String * systemId, String * internalSubset));
IL2CPP_REGISTER_METHOD(0x03036220, void, __ctor, (XDocumentType * __this, XDocumentType * other));
IL2CPP_REGISTER_METHODINFO(0x04731700, XDocumentType__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03036300, void, __ctor, (XDocumentType * __this, String * name, String * publicId, String * systemId, String * internalSubset, IDtdInfo * dtdInfo));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_InternalSubset, (XDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (XDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x008556D0, XmlNodeType__Enum, get_NodeType, (XDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_PublicId, (XDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_SystemId, (XDocumentType * __this));
IL2CPP_REGISTER_METHOD(0x03036330, void, WriteTo, (XDocumentType * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x047219C8, XDocumentType_WriteTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03036420, XNode *, CloneNode, (XDocumentType * __this));
}
