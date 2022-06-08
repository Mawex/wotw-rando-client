using namespace app;

namespace app::methods::System::Data::XMLSchema {
IL2CPP_REGISTER_METHOD(0x023D3700, TypeConverter *, GetConverter, (Type * type));
IL2CPP_REGISTER_METHOD(0x023D37A0, void, SetProperties, (Object * instance, XmlAttributeCollection * attrs));
IL2CPP_REGISTER_METHODINFO(0x047785D0, XMLSchema_SetProperties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023D3CC0, bool, FEqualIdentity, (XmlNode * node, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x023D3D80, bool, GetBooleanAttribute, (XmlElement * element, String * attrName, String * attrNS, bool defVal));
IL2CPP_REGISTER_METHODINFO(0x0471E548, XMLSchema_GetBooleanAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023D3F30, String *, GenUniqueColumnName, (String * proposedName, DataTable * table));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XMLSchema * __this));
}
